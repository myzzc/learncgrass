#include <iostream>
#include <string>
using namespace std;

#define MAX 1000

struct Person
{
    string m_Name;
    int m_Sex;
    int m_Age;
    string m_Phone;
    string m_Addr;
};

struct AddressBooks
{
    struct Person personArray[MAX];
    int m_Size;
};

void showMenu();
void exit();
void addPerson(AddressBooks *abs);
void showPersons(AddressBooks *abs);
int inputInt(string content);
string inputString(string content);
int isExist(AddressBooks *abs, string name);
void delPerson(AddressBooks *abs);
void findPerson(AddressBooks *abs);

int main()
{
    AddressBooks abs;
    abs.m_Size = 0;
    int select = 0;
    while (true)
    {
        showMenu();
        cin >> select;
        switch (select)
        {
        case 1:
            addPerson(&abs);
            break;
        case 2:
            showPersons(&abs);
            cout << endl;
            break;
        case 3:
            delPerson(&abs);
            break;
        case 4:
            findPerson(&abs);
            break;
        case 5:
            /* code */
            break;
        case 6:
            /* code */
            break;
        case 0:
            exit();
            return 0;
            break;

        default:
            break;
        }
    }
    return 0;
}

// 菜单
void showMenu()
{
    cout << "*********************" << endl;
    cout << "*****1. 添加联系人*****" << endl;
    cout << "*****2. 显示联系人*****" << endl;
    cout << "*****3. 删除联系人*****" << endl;
    cout << "*****4. 查找联系人*****" << endl;
    cout << "*****5. 修改联系人*****" << endl;
    cout << "*****6. 清空联系人*****" << endl;
    cout << "*****0. 退出通讯录*****" << endl;
    cout << "*********************" << endl;
}

// 添加
void addPerson(AddressBooks *abs)
{
    if (abs->m_Size == MAX)
    {
        cout << "通讯录已满，不能再添加了" << endl;
        return;
    }
    string name = inputString("请输入姓名");
    int sex = inputInt("请输入性别\n1--男\n2--女");
    int age = inputInt("请输入年龄");
    string phone = inputString("请输入联系电话");
    string addr = inputString("请输入家庭住址");
    Person temp = {name, sex, age, phone, addr};
    abs->personArray[abs->m_Size] = temp;
    abs->m_Size += 1;
    cout << "添加成功" << endl;
    system("sleep 1");
    system("clear");
}

int inputInt(string content)
{
    int result;
    cout << content << endl;
    cin >> result;
    return result;
}

string inputString(string content)
{
    string result;
    cout << content << endl;
    cin >> result;
    return result;
}

// 显示
void showPersons(AddressBooks *abs)
{
    if (abs->m_Size == 0)
    {
        system("clear");
        cout << "当前记录为空" << endl;
        return;
    }
    cout << "序号\t姓名\t性别\t年龄\t电话\t住址" << endl;
    for (int i = 0; i < abs->m_Size; i++)
    {
        cout << i + 1 << "\t";
        cout << abs->personArray[i].m_Name << "\t";
        switch (abs->personArray[i].m_Sex)
        {
        case 1:
            cout << "男\t";
            break;
        case 2:
            cout << "女\t";
            break;
        default:
            cout << "\t";
        }
        cout << abs->personArray[i].m_Age << "\t";
        cout << abs->personArray[i].m_Phone << "\t";
        cout << abs->personArray[i].m_Addr << endl;
    }
}

void delPerson(AddressBooks *abs)
{
    if (abs->m_Size == 0)
    {
        system("clear");
        cout << "通讯录为空" << endl;
        return;
    }
    cout << "请输入要删除的人姓名" << endl;
    string name;
    cin >> name;
    int index = isExist(abs, name);
    if (index == -1)
    {
        cout << "查无此人" << endl;
        return;
    }
    if (index != abs->m_Size - 1)
    {
        abs->personArray[index] = abs->personArray[abs->m_Size - 1];
    }
    else
    {
        abs->personArray[index] = abs->personArray[index + 1];
    }
    abs->m_Size--;
    system("clear");
    cout << "删除成功" << endl;
}

void findPerson(AddressBooks *abs)
{
    if (abs->m_Size == 0)
    {
        system("clear");
        cout << "通讯录为空" << endl;
        return;
    }
    cout << "请输入要查找的人姓名" << endl;
    string name;
    cin >> name;
    int index = isExist(abs, name);
    if (index == -1)
    {
        cout << "查无此人" << endl;
        return;
    }
    system("clear");
    cout << "姓名\t性别\t年龄\t电话\t住址" << endl;
    cout << abs->personArray[index].m_Name << "\t";
    switch (abs->personArray[index].m_Sex)
    {
    case 1:
        cout << "男\t";
        break;
    case 2:
        cout << "女\t";
        break;
    default:
        cout << "\t";
    }
    cout << abs->personArray[index].m_Age << abs->personArray[index].m_Phone << "\t" << abs->personArray[index].m_Addr << endl;
}

// 退出
void exit()
{
    cout << "欢迎下次使用" << endl;
    system("sleep 1");
}

int isExist(AddressBooks *abs, string name)
{
    for (int i = 0; i < abs->m_Size; i++)
    {
        if (abs->personArray[i].m_Name == name)
        {
            return i;
        }
    }
    return -1;
}

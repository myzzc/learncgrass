#include <iostream>
#include <string>
#include "test1.h"
using namespace std;

#define Day 7;
const int b = 10;
#define addd(x, y) x + y

struct student
{
    string Name;
    int Age;
    /* data */
};

int add(int num1, int num2);

int main(int argc, char const *argv[])
{
    /* code */
    cout << "hello world!" << endl;
    // system("sleep 3");
    int a = 10;
    cout << " a = " << a << endl;
    int c = Day
    cout  << c << endl;
    cout << "一周一共有" << c << "天"<< endl;
    cout << "占用大小" << sizeof(a) << endl;
    c = add(6, 7);
    cout << c << endl;
    float f1 = 2.14f;
    cout << f1/3.0 << endl;
    cout << f1/3 << endl;
    cout << f1/a << endl;
    char c1 = 'f';
    cout << c1 << endl;
    cout << (int)c1 << endl;
    char s1[] = "1234567";
    string s2 = "qwertyu";
    cout << s1 << endl;
    cout << s2 << endl;
    bool flag = true;
    cout << flag << endl;
    cout << "请输入a 的值" << endl;
    // cin >> a;
    // cout << a << endl;
    flag = 5;
    cout << (flag == 1) << endl;
    cout << (flag == 2) << endl;
    if (flag)
    {
        /* code */
        cout << "666" << endl;
    }else if (2 == 2)
    {
        /* code */
        cout << "777" << endl;
    }
    switch (a)
    {
    case 1:
    cout << 1 << endl;
        /* code */
        break;
    case 2:
    cout << 2 << endl;
        /* code */
        break;
    
    default:
    cout << a << endl;
        break;
    }
    while (1)
    {
        cout << "4" << endl;
        break;
        /* code */
    }
    do
    {
        /* code */
        cout << "3" << endl;
        break;
    } while (1);
    
    int num = rand() % 100 + 1;
    cout << num << endl;
    printf("45678");
    cout << endl;
    // srand((unsigned int)time(NULL));
    srand((unsigned int)time(nullptr));
    cout << (rand() % 100 + 1) << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << i << endl;
        /* code */
    }
    int leng = 2;
    for (int i = leng - 1; i >= 0; i--)
    {
        /* code */
    }
    cout << "**********" << endl;
    int arr[3] = {1, 2, 3};
    int arr2[3];
    cout << arr2[0] << endl;
    cout << arr2[1] << endl;
    cout << arr2[2] << endl;
    cout << arr2[3] << endl;
    cout << arr2[4] << endl;
    // cout << sizeof(arr) << endl;
     cout << "**********" << endl;
     cout << sizeof(int *) << endl;
    student ss1;
    ss1.Name = "qqq";
    student ss2 = {"e", 7};
    student * p = &ss2;
    cout << ss2.Name << endl;
    struct student arrS[2] = 
    {
        {"r", 7},
        {"t", 8}
    };
    return 0;
    
}

int add(int num1, int num2) {
    return add2(num1, num2);
}

void addStu(student s, student arr[]) {

}
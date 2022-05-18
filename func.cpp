#include <iostream>
#include "test01/point.h"

using namespace std;
const double PI = 3.14;

class Circle
{
    friend void testFri(Circle c);

public:
    static int b;

    int m_r;
    double caculateZC()
    {
        return 2 * PI * m_r;
    };

private:
    int pr;
};

Circle operator+(Circle &c1, Circle &c2)
{
    Circle temp;
    temp.b = c1.b + c2.b;
    return temp;
}

void testFri(Circle c)
{
    cout << c.pr << endl;
}

struct F1
{
    void func2()
    {
        cout << "tyuio" << endl;
    };
};

void func1(int &a);
void func1(const int &a);
// void func1(string a);

int main()
{
    cout << Circle::b << endl;
    Point *p;
    p->getX();
    Circle c1;
    Circle c2;
    Circle c3 = c1 + c2;
    // p.getX();
    F1 f1;
    f1.func2();
    int a = 10;
    const int &b = 100;
    int &c = a;
    cout << "a" << a << endl;
    cout << "b" << b << endl;
    cout << "c" << c << endl;
    func1(a);
    func1(b);
    func1(c);
    // func1("rtyui");
    cout << c1.caculateZC() << endl;
    return 0;
}

// void func1(string a) {
//     cout << "func 3" << endl;
// }
void func1(int &a)
{
    cout << "func 1" << endl;
}

void func1(const int &a)
{
    cout << "func 2" << endl;
}
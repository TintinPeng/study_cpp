/*
 * @Author: your name
 * @Date: 2020-08-21 17:21:05
 * @LastEditTime: 2020-08-22 10:38:30
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_3_37.cpp
 */
#include "iostream"

using namespace std;

class A {
private:
    int x;
    float y;

public:
    A(int _x, float _y);
    ~A();
    void show();
};

A::A(int _x, float _y)
{
    x = _x;
    y = _y;
}

A::~A()
{
}

void A::show()
{
    cout << "x=" << x << endl
         << "y=" << y << endl;
}
class B {
private:
    A a;
    int z;

public:
    B(int _x, float _y, int _z);
    ~B();
    void show();
};

B::B(int _x, float _y, int _z)
    : a(_x, _y)
{
    z = _z;
}

B::~B()
{
}

void B::show()
{
    a.show();
    cout << "z=" << z << endl;
}
int main(int argc, char const* argv[])
{
    B b(1, 2, 3);
    b.show();
    return 0;
}

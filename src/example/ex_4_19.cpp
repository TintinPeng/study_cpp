/*
 * @Author: your name
 * @Date: 2020-08-26 19:33:25
 * @LastEditTime: 2020-08-27 09:22:25
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_4_19.cpp
 */

#include "iostream"

using namespace std;

class Base {
public:
    int i;
    Base(int _i) { i = _i; }
    void show() { cout << "Base " << i << endl; }
};

class Derived : public Base {
public:
    Derived(int _i)
        : Base(_i)
    {
    }
};

void fun(Base& b)
{
    cout << b.i << endl;
}

int main(int argc, char const* argv[])
{
    //基类与派生类对象之间的类型转换
    //用派生类给基类赋值
    Base b1(100);
    b1.show();
    Derived d1(11);
    b1 = d1;
    b1.show();

    Derived d2(22);
    Base& b2 = d2;
    b2.show();

    Derived d3(33);
    Base* b3 = &d3;
    b3->show();

    Derived d4(44);
    fun(d4);
    return 0;
}

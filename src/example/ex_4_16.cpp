/*
 * @Author: your name
 * @Date: 2020-08-26 16:19:58
 * @LastEditTime: 2020-08-26 16:32:44
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_4_16.cpp
 */
#include "iostream"

using namespace std;

class Base {
protected:
    int a;

public:
    Base()
    {
        a = 5;
        cout << "Base a=" << a << endl;
    }
    ~Base() { }
};

class Base1 : virtual public Base {
public:
    Base1()
    {
        a = a + 10;
        cout << "Base1 a=" << a << endl;
    }
    ~Base1() { }
};

class Base2 : virtual public Base {
public:
    Base2()
    {
        a = a + 20;
        cout << "Base2 a=" << a << endl;
    }
    ~Base2() { }
};

class Derived : public Base1, public Base2 {
public:
    Derived()
    {
        cout << "Base1::a=" << Base1::a << endl;
        cout << "Base2::a=" << Base2::a << endl;
        cout << "Derived a=" << a << endl;
    }
    ~Derived() { }
};

int main(int argc, char const* argv[])
{
    Derived obj;
    return 0;
}

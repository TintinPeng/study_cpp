/*
 * @Author: your name
 * @Date: 2020-08-26 16:19:58
 * @LastEditTime: 2020-08-31 00:24:38
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_4_15.cpp
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

class Base1 : public Base {
public:
        Base1()
        {
                a = a + 10;
                cout << "Base1 a=" << a << endl;
        }
        ~Base1() { }
};

class Base2 : public Base {
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
        }
        ~Derived() { }
};

int main(int argc, char const* argv[])
{
        //虚基类的引用
        Derived obj;
        return 0;
}

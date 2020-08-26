/*
 * @Author: your name
 * @Date: 2020-08-26 16:19:58
 * @LastEditTime: 2020-08-26 19:13:03
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_4_17.cpp
 */
#include "iostream"

using namespace std;

class Base {
private:
    int a;

public:
    Base(int _a)
    {
        a = _a;
        cout << "Base基类构造函数" << endl;
    }
    ~Base() { }
};

class Base1 : virtual public Base {
private:
    int b;

public:
    Base1(int _a, int _b)
        : Base(_a)
    {
        b = _b;
        cout << "Base1派生类构造函数" << endl;
    }
    ~Base1() { }
};

class Base2 : virtual public Base {
private:
    int c;

public:
    Base2(int _a, int _c)
        : Base(_a)
    {
        c = _c;
        cout << "Base2派生类构造函数" << endl;
    }
    ~Base2() { }
};

class Derived : public Base1, public Base2 {
private:
    int d;

public:
    Derived(int _a, int _b, int _c, int _d)
        : Base(_a)
        , Base1(_a, _b)
        , Base2(_a, _c)
    {
        d = _d;
        cout << "Derived共同派生类构造函数" << endl;
    }
    ~Derived() { }
};

int main(int argc, char const* argv[])
{
    //虚基类的派生类的构造函数的执行顺序
    Derived obj(1, 2, 3, 4);
    return 0;
}

/*
 * @Author: your name
 * @Date: 2020-08-26 10:08:34
 * @LastEditTime: 2020-08-26 10:19:22
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_4_8.cpp
 */
#include "iostream"

using namespace std;

class Base {
private:
    int x;

public:
    Base(int i)
    {
        x = i;
        cout << "基类Base构造函数" << endl;
    }
    ~Base() { cout << "基类Base析构函数" << endl; }
    void show() { cout << "x=" << x << endl; }
};

class Derived : public Base {
private:
    Base d;

public:
    Derived(int i)
        : Base(i)
        , d(i)
    {
        cout << "派生类Derived构造函数" << endl;
    }
    ~Derived() { cout << "派生类Derived析构函数" << endl; }
};

int main(int argc, char const* argv[])
{
    //含有对象成员的派生类构造函数和析构函数的执行顺序
    Derived obj(25);
    obj.show();
    return 0;
}

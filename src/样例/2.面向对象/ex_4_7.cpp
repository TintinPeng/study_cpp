/*
 * @Author: your name
 * @Date: 2020-08-26 09:58:18
 * @LastEditTime: 2020-08-31 00:25:15
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_4_7.cpp
 */
#include "iostream"

using namespace std;

class Base {
public:
        Base() { cout << "基类Base构造函数" << endl; }
        ~Base() { cout << "基类Base析构函数" << endl; }
};

class Derived : public Base {
public:
        Derived() { cout << "派生类Derived构造函数" << endl; }
        ~Derived() { cout << "派生类Derived析构函数" << endl; }
};

int main(int argc, char const* argv[])
{
        //派生类的构造函数和析构函数的使用
        Derived obj;
        return 0;
}

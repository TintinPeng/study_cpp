/*
 * @Author: your name
 * @Date: 2020-08-26 08:35:45
 * @LastEditTime: 2020-08-31 00:26:46
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_4_5.cpp
 */
#include "iostream"

using namespace std;

class Base {
public:
        Base() { cout << "基类构造函数" << endl; }
        ~Base() { cout << "基类析构函数" << endl; }
};

class Derived : public Base {
public:
        Derived() { cout << "派生类构造函数" << endl; }
        ~Derived() { cout << "派生类析构函数" << endl; }
};

int main(int argc, char const* argv[])
{
        //派生类的构造函数和析构函数的使用
        Derived obj;
        return 0;
}

/*
 * @Author: your name
 * @Date: 2020-08-11 14:19:11
 * @LastEditTime: 2020-08-25 16:50:56
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/ex_3_7.cpp
 */
#include "iostream"
using namespace std;

class A {
private:
        int x;
        int& rx;
        const double PI;

public:
        A(int x1);
        ~A();
        void print();
};

A::A(int x1)
        : x(x1)
        , rx(x)
        , PI(3.14)
{
}

A::~A()
{
}

void A::print()
{
        cout
                << "x = " << x << "\t"
                << "rx = " << rx << "\t"
                << "pi = " << PI << endl;
}

int main(int argc, char const* argv[])
{
        /* 
     * 用成员初始化列表对引用类型的数据成员rx和const修饰的数据成员PI初始化
     */
        A a(10);
        a.print();
        return 0;
}

/*
 * @Author: your name
 * @Date: 2020-08-11 16:09:15
 * @LastEditTime: 2020-08-31 10:30:38
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/ex_3_8.cpp
 */
#include "iostream"
using namespace std;
class A {
private:
        int mem1;
        int mem2;

public:
        A(int i);
        ~A();
};

// A::A(int i)
//     : mem2(i)
//     , mem1(mem2 + 1)
// {
//     cout << "mem1:" << mem1 << endl;
//     cout << "mem2:" << mem2 << endl;
// }

A::A(int i)
        : mem1(i)
        , mem2(mem1 + 1)
{
        cout << "mem1:" << mem1 << endl;
        cout << "mem2:" << mem2 << endl;
}

A::~A()
{
}

int main(int argc, char const* argv[])
{
        // 用初始化成员列表对数据成员进行初始化
        // 数据成员是按照它们在类中的顺序进行初始化的
        A a(15);
        return 0;
}

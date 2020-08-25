/*
 * @Author: your name
 * @Date: 2020-07-31 10:26:45
 * @LastEditTime: 2020-08-25 16:54:17
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/example/ex_2_21.cpp
 */
#include "iostream"
using namespace std;

void swap(int& m, int& n)
{
    int tmp;
    tmp = m;
    m = n;
    n = tmp;
}

int main()
{
    /*
     * 引用作为函数参数的例子
     */
    int a = 5, b = 10;
    cout
        << "a = " << a << "\t"
        << "b = " << b << endl;
    swap(a, b);
    cout
        << "a = " << a << "\t"
        << "b = " << b << endl;
}
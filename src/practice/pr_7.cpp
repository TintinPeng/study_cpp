/*
 * @Author: your name
 * @Date: 2020-08-20 09:21:09
 * @LastEditTime: 2020-08-21 08:41:25
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/practice/pr_7.cpp
 */
#include "iostream"
using namespace std;
void exchange(int* point1, int* point2)
{
    //形参只有在函数调用时才会被创建,调用完就会被销毁
    int* point;
    point = point1;
    point1 = point2;
    point2 = point;
}

int main(int argc, char const* argv[])
{
    int *p1, *p2, a, b;
    cin >> a >> b;
    p1 = &a, p2 = &b;
    exchange(p1, p2);
    cout << a << "\t" << b << endl;
    cout << *p1 << "\t" << *p2 << endl;
    int* p;
    p = p1, p1 = p2, p2 = p;
    cout << a << "\t" << b << endl;
    cout << *p1 << "\t" << *p2 << endl;
}
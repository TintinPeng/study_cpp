/*
 * @Author: tinitn
 * @Date: 2020-07-31 09:34:47
 * @LastEditTime: 2020-07-31 10:56:12
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/example/ex_2_15.cpp
 */
#include "iostream"
using namespace std;
int main()
{
    /*
     * 使用new和delete的简单例子
     */
    int *ptr1, *ptr2;
    ptr1 = new int;
    ptr2 = new int[10];
    *ptr1 = 99;
    for (int i = 0; i < 10; i++)
    {
        *(ptr2 + i) = i;
    }
    cout << ptr1 << "所存放的数据元素为:" << *ptr1 << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << ptr2 + i << "所存放的数据元素为:" << *(ptr2 + i) << endl;
    }
    delete ptr1, ptr2;
}
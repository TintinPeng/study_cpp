/*
 * @Author: tintin
 * @Date: 2020-07-31 09:23:29
 * @LastEditTime: 2020-07-31 09:30:59
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/grammar/ex_2_16.cpp
 */
#include "iostream"
using namespace std;
int main()
{
    /*
     * new 可以在简单变量分配内存的同时,进行初始化.
     * 基本形式:指针变量名=new类型(初值)
     */
    int *p;
    p = new int(99);
    cout << *p << endl;
    delete p;
}
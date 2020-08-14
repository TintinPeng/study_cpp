/*
 * @Author: your name
 * @Date: 2020-08-14 14:46:04
 * @LastEditTime: 2020-08-14 15:12:09
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/practice/pr_2.cpp
 */

#include "iostream"
using namespace std;

int main(int argc, char const* argv[])
{
    /* 
     * a++和++a的区别
     */
    int a, b;
    // a = 0;
    // a++;
    // ++a;
    // cout << a << endl;
    a = 0;
    b = ++a;
    cout << b << endl;
    a = 0;
    b = a++;
    cout << b << endl;
    return 0;
}

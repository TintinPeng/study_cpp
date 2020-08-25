/*
 * @Author: tintin
 * @Date: 2020-08-01 09:07:40
 * @LastEditTime: 2020-08-25 09:11:38
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/example/ex_2_6.cpp
 */

#include "iostream"
using namespace std;

int main()
{
    /*
     * 用const取代#define
     */
    int a = 1;
    int const T1 = a + a;
    int const T2 = T1 - T1;
    cout << "T2 = " << T2 << endl;

    //const int d = 100;
    //int* p1 = &d;//报错
    //int& p2 = d;//报错
}
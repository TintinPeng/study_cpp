/*
 * @Author: tintin
 * @Date: 2020-08-01 09:07:40
 * @LastEditTime: 2020-08-01 09:09:13
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
}
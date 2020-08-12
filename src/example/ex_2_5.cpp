/*
 * @Author: tintin
 * @Date: 2020-08-01 09:02:03
 * @LastEditTime: 2020-08-01 09:07:09
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/example/ex_2_5.cpp
 */

#include "iostream"
using namespace std;

int main()
{
    /*
     * #define的不安全性
     */
    int a = 1;
#define T1 a + a
#define T2 T1 - T1
    cout << "T2 = " << T2 << endl;
}
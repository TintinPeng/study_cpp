/*
 * @Author: tinitn
 * @Date: 2020-07-31 09:58:06
 * @LastEditTime: 2020-08-01 10:06:45
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/example/ex_2_14.cpp
 */
#include "iostream"
using namespace std;
int avar = 10;
int main()
{
    /*
     * 全局变量和局部变量同名情况
     */
    int avar = 25;
    cout << "avar = " << avar << endl;
}

/*
 * @Author: tinitn
 * @Date: 2020-07-31 09:58:06
 * @LastEditTime: 2020-07-31 10:00:45
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/example/ex_2_14.cpp
 */
#include "iostream"
using namespace std;
int avar;
int main()
{
    int avar;
    avar = 25;
    ::avar = 10;
    cout << " loacl avar = " << avar << endl;
    cout << "global avar = " << ::avar << endl;
}

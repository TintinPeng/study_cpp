/*
 * @Author: your name
 * @Date: 2020-09-12 19:30:35
 * @LastEditTime: 2020-09-12 20:08:16
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/practice/pr_11.cpp
 */
#include "../../inc/tintin.hpp"
#include <cmath>
#include <iostream>

using namespace std;

int main(int argc, char const* argv[])
{
        double a[3] = { 1.2, 2.8, 3.6 };
        for (int i = 0; i < getArrayLen(a); i++) {
                cout << round(a[i]) << endl;
        }
        return 0;
}
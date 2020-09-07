/*
 * @Author: your name
 * @Date: 2020-09-07 15:12:49
 * @LastEditTime: 2020-09-07 15:59:03
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/practice/pr_9.cpp
 */
#include "../../inc/tintin.hpp"
#include "iostream"

using namespace std;

int main(int argc, char const* argv[])
{
        int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
        // cout << sizeof(a) / sizeof(int) << endl;
        cout << getArrayLen(a) << endl;
        return 0;
}
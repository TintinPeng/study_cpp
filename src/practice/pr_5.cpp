/*
 * @Author: your name
 * @Date: 2020-08-18 08:11:35
 * @LastEditTime: 2020-08-31 00:23:04
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/practice/pr_5.cpp
 */

#include "iostream"
using namespace std;

int main(int argc, char const* argv[])
{
        int a[10] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, b[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
        int x;
        for (int i = 0; i < 10; i++) {
                for (int j = 0; j < 10; j++) {
                        if (a[i] == b[j]) {
                                x = a[i];
                                goto found;
                        }
                }
        }
found:
        cout
                << "jump out"
                << "\t" << x << endl;
        return 0;
}

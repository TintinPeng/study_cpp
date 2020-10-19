/*
 * @Author: your name
 * @Date: 2020-08-18 11:37:12
 * @LastEditTime: 2020-08-31 00:22:37
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/practice/pr_6.cpp
 */
#include "iostream"
int main(int argc, char const* argv[])
{
        for (int i = 1; i <= 9; i++) {
                for (int j = 1; j <= i; j++)
                        std::cout << j << "*" << i << "=" << i * j << " ";
                std::cout << std::endl;
        }
        return 0;
}
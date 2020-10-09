/*
 * @Author: your name
 * @Date: 2020-08-12 09:20:08
 * @LastEditTime: 2020-08-31 10:24:00
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/practice/pr_1.cpp
 */

#include "iostream"
using namespace std;

int main(int argc, char const* argv[])
{
        /* 
         * c++11中字符转换
         */

        string stri = "500";
        string strl = "6666666";
        string strd = "99.1252533";
        string strf = "7878.336";
        int    i = stoi(stri);
        long   j = stol(strl);
        double k = stod(strd);
        float  l = stof(strf);
        cout << "str = " << i << " str = " << j << " str = " << k << " str = " << l << endl;
        /* 
         * c语言中字符转换
         */
        string str = "800";
        int    m = atoi(str.c_str());
        cout << "str = " << m << endl;
        return 0;
}

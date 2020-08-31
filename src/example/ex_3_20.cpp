/*
 * @Author: your name
 * @Date: 2020-08-12 13:50:47
 * @LastEditTime: 2020-08-31 10:18:08
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_3_20.cpp
 */

#include "iostream"
#include "string"

using namespace std;

int main(int argc, char const* argv[])
{
        /*
         * string类运算符的操作
         */
        string s1 = "ABC", s2 = "DEF", s3("GHI"), s4, s5, s6;
        s4 = s1;
        cout << "s4 = " << s4 << endl;
        s5 = s1 + s2;
        cout << "s5 = " << s5 << endl;
        s5 += "123";
        cout << "s5+'123' = " << s5 << endl;
        if (s3 > s1) {
                cout << "s3>s1" << endl;
        } else {
                cout << "s3<s1" << endl;
        }
        if (s4 == s1) {
                cout << "s4=s1" << endl;
        } else {
                cout << "s4!=s1" << endl;
        }
        cin >> s6;
        cout << s6 << endl;
        return 0;
}

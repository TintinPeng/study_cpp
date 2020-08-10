/*
 * @Author: tintin
 * @Date: 2020-08-01 08:46:51
 * @LastEditTime: 2020-08-10 19:06:35
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/example/ex_2_2.cpp
 */
#include "iostream"
using namespace std;

class sum {
public:
    int x, y, z;

    int fun()
    {
        z = x + y;
        return z;
    }
};

int main()
{
    /*
     * c++程序结构性示例
     */
    sum A;
    cout << "请输入两个数" << endl;
    cin >> A.x >> A.y;
    cout << "x + y = " << A.fun() << endl;
}
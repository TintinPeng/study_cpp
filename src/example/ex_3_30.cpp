/*
 * @Author: your name
 * @Date: 2020-08-14 15:54:51
 * @LastEditTime: 2020-08-14 16:01:48
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_3_30.cpp
 */
#include "iostream"

using namespace std;

class myclass {
public:
    myclass() { }
    ~myclass() { }
    static int i;
    int get_i()
    {
        return i;
    }
};

int myclass::i = 0; //静态数据成员初始化时应该加上类型名

int main()
{
    /*
     * 公有静态成员的访问
     */
    myclass::i = 0;
    myclass ob1, ob2;
    myclass::i = 200;
    cout << ob1.get_i() << endl;
    cout << ob2.get_i() << endl;
    myclass::i = 300;
    cout << ob1.get_i() << endl;
    cout << ob2.get_i() << endl;
}
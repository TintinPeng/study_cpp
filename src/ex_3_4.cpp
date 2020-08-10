/*
 * @Author: your name
 * @Date: 2020-08-09 18:00:57
 * @LastEditTime: 2020-08-10 15:20:32
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/ex_3_4.cpp
 */
#include "iostream"

using namespace std;

class Point
{
private:
    int x, y;
    bool init_flag;

public:
    void setpoint(int a, int b)
    {
        x = a;
        y = b;
        init_flag = true;
    }

    int get_x()
    {
        if (init_flag != true)
        {
            cout << "该对象对x没有初始化" << endl;
            return 0;
        }
        return x;
    }

    int get_y()
    {
        if (init_flag != true)
        {
            cout << "该对象对y没有初始化" << endl;
            return 0;
        }
        return y;
    }
};

int main()
{
    Point op1, op2, op3;
    int i, j;
    op1.setpoint(1, 2);
    op2.setpoint(3, 4);
    i = op1.get_x();
    j = op1.get_y();
    cout << "i = " << i << "\t"
         << "j = " << j << "\t" << endl;
    i = op2.get_x();
    j = op2.get_y();
    cout << "i = " << i << "\t"
         << "j = " << j << "\t" << endl;
    i = op3.get_x();
    j = op3.get_y();
    cout << "i = " << i << "\t"
         << "j = " << j << "\t" << endl;
}
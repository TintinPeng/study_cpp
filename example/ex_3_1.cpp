/*
 * @Author: tintin
 * @Date: 2020-07-31 15:28:09
 * @LastEditTime: 2020-07-31 15:54:48
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/example/ex_3_1.cpp
 */
#include "iostream"
#include "cmath"

using namespace std;

struct complex
{
    double real, imag;
    void init(double r, double i)
    {
        real = r;
        imag = i;
    }
    double complex_abs()
    {
        double t;
        t = real * real + imag * imag;
        return sqrt(t);
    }
    void complex_print()
    {
        if (real != 0)
        {
            if (imag > 0)
            {
                cout << real << "+" << imag << "i的绝对值是" << complex_abs() << endl;
            }
            else if (imag == 0)
            {
                cout << real << "的绝对值是" << complex_abs() << endl;
            }
            else if (imag < 0)
            {
                cout << real << imag << "i的绝对值是" << complex_abs() << endl;
            }
        }
        else if (real == 0)
        {
            cout << imag << "i的绝对值是" << complex_abs() << endl;
        }
    }
};

int main()
{
    /*
     * 用扩充的结构体类型求复数的绝对值
     * 结构体的默认访问权限是public
     */
    complex A;
    A.init(2, -3);
    A.complex_print();
}
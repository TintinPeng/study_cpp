/*
 * @Author: tintin
 * @Date: 2020-07-31 15:58:32
 * @LastEditTime: 2020-08-05 15:14:49
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/example/ex_3_2.cpp
 */
#include "iostream"
#include "cmath"

using namespace std;

class complex
{
public:
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
     * 用类类型代替结构体类型
     * 类的默认访问权限是private
     */
    complex num;
    num.init(5, -3);
    num.complex_print();
}
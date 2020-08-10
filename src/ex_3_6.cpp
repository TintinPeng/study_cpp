/*
 * @Author: your name
 * @Date: 2020-08-10 16:02:51
 * @LastEditTime: 2020-08-10 19:05:17
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/ex_3_6.cpp
 */

#include "cmath"
#include "iostream"

using namespace std;

class complex {
private:
    double real, imag;

public:
    complex()
    {
        real = 0;
        imag = 0;
    }
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
        if (real != 0) {
            if (imag > 0) {
                cout << real << "+" << imag << "i的绝对值是" << complex_abs() << endl;
            } else if (imag == 0) {
                cout << real << "的绝对值是" << complex_abs() << endl;
            } else if (imag < 0) {
                cout << real << imag << "i的绝对值是" << complex_abs() << endl;
            }
        } else if (real == 0) {
            cout << imag << "i的绝对值是" << complex_abs() << endl;
        }
    }
};

int main(int argc, char const* argv[])
{
    complex num;
    num.init(3, 5);
    num.complex_abs();
    num.complex_print();
    return 0;
}

/*
 * @Author: tintin
 * @Date: 2020-07-31 16:06:50
 * @LastEditTime: 2020-07-31 16:10:32
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/example/ex_3_3.cpp
 */
#include "cmath"
#include "iostream"

using namespace std;

class complex {
private:
    double real, imag;

public:
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

int main()
{
    /*
     * 含有公有成员和私有成员的complex类
     * 
     */
    complex num;
    num.init(5, -3);
    num.complex_print();
}
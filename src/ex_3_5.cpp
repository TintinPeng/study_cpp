/*
 * @Author: your name
 * @Date: 2020-08-10 15:20:54
 * @LastEditTime: 2020-08-10 15:57:30
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/ex_3_5.cpp
 */
#include "iostream"
#include "cmath"

using namespace std;

class complex
{
private:
    double real, imag;

public:
    complex(double r, double i)
    {
        real = r;
        imag = i;
    }
    // void init(double r, double i)
    // {
    //     real = r;
    //     imag = i;
    // }

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

int main(int argc, char const *argv[])
{
    complex num(-3, 4);
    num.complex_abs();
    num.complex_print();
    return 0;
}

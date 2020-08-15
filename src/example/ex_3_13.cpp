/*
 * @Author: your name
 * @Date: 2020-08-12 09:46:33
 * @LastEditTime: 2020-08-12 10:04:00
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_3_13.cpp
 */

#include "cmath"
#include "iostream"

using namespace std;

class complex {
private:
    double real, imag;

public:
    complex(double r = 0.0, double i = 0.0)
    {
        real = r;
        imag = i;
    }

    ~complex()
    {
        cout << "析构函数被调用" << endl;
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
    /* 
     * 含有构造函数和析构函数的complex类
     * 如果构造函数有new动态分配存储空间,应该用delete释放动态分配的空间
     */
    complex num1;
    num1.complex_abs();
    num1.complex_print();

    complex num2(5);
    num2.complex_abs();
    num2.complex_print();

    complex num3(3, 4);
    num3.complex_abs();
    num3.complex_print();
    return 0;
}

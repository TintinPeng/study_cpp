/*
 * @Author: your name
 * @Date: 2020-08-12 10:09:59
 * @LastEditTime: 2020-08-12 10:15:48
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_3_15.cpp
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
        real = 0.0;
        imag = 0.0;
    }

    complex(double r, double i = 9.0) //定义为9是为了方便理解
    {
        real = r;
        imag = i;
    }

    ~complex()
    {
        // cout << "析构函数被调用" << endl;
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
     * 用只有一个参数的构造函数给对象数组赋值
     * 
     */
    complex num1[3] = { 1, 2, 3 };
    for (int i = 0; i < 3; i++) {
        num1[i].complex_abs();
        num1[i].complex_print();
    }
    cout << endl;
    complex num2[3] = { 1 }; //1:调用了有参数构造函数;2,3:调用了无参数构造函数;
    for (int i = 0; i < 3; i++) {
        num2[i].complex_abs();
        num2[i].complex_print();
    }

    return 0;
}

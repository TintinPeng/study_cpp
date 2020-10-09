/*
 * @Author: your name
 * @Date: 2020-09-12 19:47:38
 * @LastEditTime: 2020-09-12 19:57:12
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_5_17.cpp
 */
#include "iostream"

using namespace std;

class Complex {
private:
        double real, imag;

public:
        Complex(double _real = 0.0, double _imag = 0.0) { real = _real, imag = _imag; }
        operator double() { return real; }
        operator int() { return int(real); }
        ~Complex() { }
};

int main(int argc, char const* argv[])
{
        Complex com1(1.2, 2.5);
        cout << double(com1) << endl;

        Complex com2(1.8, 2.5);
        cout << int(com2) << endl;
        return 0;
}
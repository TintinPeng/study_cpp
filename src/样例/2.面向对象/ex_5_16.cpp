/*
 * @Author: your name
 * @Date: 2020-09-12 19:47:38
 * @LastEditTime: 2020-09-12 19:50:49
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_5_16.cpp
 */
#include "iostream"

using namespace std;

class Complex {
private:
        double real, imag;

protected:
public:
        Complex(double _real = 0.0, double _imag = 0.0) { real = _real, imag = _imag; }
        operator double() { return real; }
        ~Complex() { }
};

int main(int argc, char const* argv[])
{
        Complex com(1.2, 2.5);
        cout << double(com) << endl;
        return 0;
}
/*
 * @Author: your name
 * @Date: 2020-08-12 10:33:41
 * @LastEditTime: 2020-08-31 00:29:12
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_3_18.cpp
 */
#include "iostream"

using namespace std;

class A {
private:
        int x;

public:
        A(int x1)
        {
                x = x1;
        }

        ~A()
        {
        }

        void disp()
        {
                cout << "x=" << x << endl;
        }
        /*
     * void disp(*this)
     * {
     *      cout << "x=" << this->x << endl;
     * }
     */
};

int main(int argc, char const* argv[])
{
        /*
     * 隐式this指针
     */
        A a(1), b(2);
        cout << "a:";
        a.disp();
        cout << "b:";
        b.disp();
        return 0;
}

/*
 * @Author: your name
 * @Date: 2020-09-07 10:27:23
 * @LastEditTime: 2020-09-07 14:45:28
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_5_8.cpp
 */
#include "iostream"

using namespace std;

class Three {
private:
        int i1, i2, i3;

public:
        Three(int _i1 = 0, int _i2 = 0, int _i3 = 0) { i1 = _i1, i2 = _i2, i3 = _i3; }
        ~Three() { }
        Three operator--()
        {
                return Three(--i1, --i2, --i3);
        }
        Three operator--(int)
        {
                return Three(i1--, i2--, i3--);
        }
        void print()
        {
                cout << "i1=" << i1 << "\t"
                     << "i2=" << i2 << "\t"
                     << "i3=" << i3 << endl;
        }
};

int main(int argc, char const* argv[])
{
        Three ob1(20, 30, 40), ob2;
        ob1.print();
        ob2.print();

        cout << "---------------------" << endl;

        ob2 = --ob1;
        ob1.print();
        ob2.print();
        ob2 = ob1.operator--();
        ob1.print();
        ob2.print();

        cout << "---------------------" << endl;

        ob2 = ob1--;
        ob1.print();
        ob2.print();
        ob2 = ob1.operator--(0);
        ob1.print();
        ob2.print();
        return 0;
}
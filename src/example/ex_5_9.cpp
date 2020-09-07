/*
 * @Author: your name
 * @Date: 2020-09-07 10:27:23
 * @LastEditTime: 2020-09-07 14:57:41
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_5_9.cpp
 */
#include "iostream"

using namespace std;

class Three {
private:
        int i1, i2, i3;

public:
        Three(int _i1 = 0, int _i2 = 0, int _i3 = 0) { i1 = _i1, i2 = _i2, i3 = _i3; }
        ~Three() { }
        friend Three operator++(Three& obj)
        {
                return Three(++obj.i1, ++obj.i2, ++obj.i3);
        }
        friend Three operator++(Three& obj, int)
        {
                return Three(obj.i1++, obj.i2++, obj.i3++);
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
        Three obj1(20, 30, 40), obj2;
        obj1.print();
        obj2.print();

        cout << "+++++++++++++++++++++" << endl;

        obj2 = ++obj1;
        obj1.print();
        obj2.print();
        obj2 = operator++(obj1);
        obj1.print();
        obj2.print();

        cout << "+++++++++++++++++++++" << endl;

        obj2 = obj1++;
        obj1.print();
        obj2.print();
        obj2 = operator++(obj1, 0);
        obj1.print();
        obj2.print();
        return 0;
}
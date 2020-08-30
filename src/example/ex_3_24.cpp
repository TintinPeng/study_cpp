/*
 * @Author: your name
 * @Date: 2020-08-12 15:17:10
 * @LastEditTime: 2020-08-12 15:58:33
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_3_24.cpp
 */
#include "iostream"
using namespace std;

class A {
private:
        int a, b;

public:
        A() { }
        ~A() { }
        void set(int i, int j)
        {
                a = i;
                b = j;
        }
        void show()
        {
                cout << a << "\t" << b << endl;
        }
};

int main(int argc, char const* argv[])
{
        /* 
     * 对象赋值语句示例
     */
        A ob1, ob2;
        ob1.set(1, 70);
        ob2 = ob1;
        ob1.show();
        ob2.show();
        return 0;
}

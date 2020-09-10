/*
 * @Author: your name
 * @Date: 2020-08-12 16:05:56
 * @LastEditTime: 2020-08-31 10:20:03
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_3_27.cpp
 */

#include "iostream"
using namespace std;

class Point {
private:
        int x, y;

public:
        Point(int a, int b = 0);
        Point(const Point& p);
        ~Point() { }

        void print()
        {
                cout << x << "\t" << y << endl;
        }
};

Point::Point(int a, int b)
{
        x = a, y = b;
        cout << "使用构造函数" << endl;
}

Point::Point(const Point& p)
{
        x = 2 * p.x, y = 2 * p.y;
        cout << "使用拷贝构造函数" << endl;
}

void fun1(Point p) //函数的形参是类的对象时
{
        p.~Point();
}

Point fun2() //函数的返回值是类的对象时
{
        Point p4(10, 30);
        return p4;
}

int main(int argc, char const* argv[])
{
        /* 
         * 使用拷贝构造函数的三种情况
         */
        Point p1(30, 40); //用类的一个对象去初始化类的另外一个对象
        p1.print();
        Point p2(p1);
        p2.print();
        Point p3 = p1;
        p3.print();
        fun1(p1);
        p2 = fun2();
        p2.print();
        return 0;
}

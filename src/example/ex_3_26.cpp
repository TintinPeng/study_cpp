/*
 * @Author: your name
 * @Date: 2020-08-12 15:37:44
 * @LastEditTime: 2020-08-12 15:59:30
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_3_26.cpp
 */

#include "iostream"
using namespace std;

class Point {
private:
    int x, y;

public:
    Point(int a, int b)
    {
        x = a, y = b;
    }

    // Point(const Point& p)
    // {
    //     x = 2 * p.x, y = 2 * p.y;
    // }

    ~Point() { }

    void print()
    {
        cout << x << "\t" << y << endl;
    }
};

int main(int argc, char const* argv[])
{
    /* 
     * 默认拷贝构造函数使用
     */
    Point p1(30, 40), p2(p1), p3 = p1;
    p1.print();
    p2.print();
    p3.print();
    return 0;
}

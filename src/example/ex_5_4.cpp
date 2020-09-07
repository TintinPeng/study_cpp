/*
 * @Author: your name
 * @Date: 2020-09-07 10:27:23
 * @LastEditTime: 2020-09-07 10:35:47
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_5_4.cpp
 */
#include "iostream"

using namespace std;

class Coord {
private:
        int x, y;

public:
        Coord(int _x = 0, int _y = 0) { x = _x, y = _y; }
        ~Coord() { }
        friend Coord operator++(Coord& obj)
        {
                return Coord(++obj.x, ++obj.y);
        }
        void print()
        {
                cout << "x=" << x << "\t"
                     << "y=" << y << endl;
        }
};

int main(int argc, char const* argv[])
{
        Coord ob(20, 30);
        ob.print();
        ++ob;
        ob.print();
        operator++(ob);
        ob.print();
        return 0;
}
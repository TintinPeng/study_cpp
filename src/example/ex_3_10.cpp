/*
 * @Author: your name
 * @Date: 2020-08-11 17:00:25
 * @LastEditTime: 2020-08-11 17:08:01
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/ex_3_10.cpp
 */
#include "iostream"
using namespace std;

class Location {
private:
        int X, Y;

public:
        Location(int m, int n);
        ~Location();
        void init(int initX, int initY);
        int GetX();
        int GetY();
};

Location::Location(int m, int n)
{
        X = m, Y = n;
}

Location::~Location()
{
}

void Location::init(int initX, int initY)
{
        X = initX, Y = initY;
}

int Location::GetX()
{
        return X;
}

int Location::GetY()
{
        return Y;
}

int main(int argc, char const* argv[])
{
        /*
     * 有构造函数时,应该按照构造函数的数据格式声明对象
     */
        Location A3(0, 0);
        A3.init(785, 900);
        cout << A3.GetX() << "\t" << A3.GetY() << endl;
        return 0;
}

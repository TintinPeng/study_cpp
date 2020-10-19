/*
 * @Author: your name
 * @Date: 2020-08-24 19:16:34
 * @LastEditTime: 2020-08-31 00:27:02
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_3_41.cpp
 */
#include "iostream"

using namespace std;

class Date {
private:
        const int year;
        const int month;
        const int day;

public:
        Date(int, int, int);
        ~Date();
        void showDate();
};

Date::Date(int y, int m, int d) //常数据成员只能用初始化列表进行初始化
        : year(y)
        , month(m)
        , day(d)
{
}

Date::~Date()
{
}

void Date::showDate()
{
        cout << year << "-" << month << "-" << day << endl;
}

int main(int argc, char const* argv[])
{
        //常数据成员的使用
        Date date1(1998, 4, 28);
        date1.showDate();
        return 0;
}

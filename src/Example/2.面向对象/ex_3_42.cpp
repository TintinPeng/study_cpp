/*
 * @Author: your name
 * @Date: 2020-08-25 09:13:40
 * @LastEditTime: 2020-08-25 09:31:06
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_3_42.cpp
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
        void showDate() const;
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

void Date::showDate() const
{
        cout << year << "-" << month << "-" << day << endl;
}

int main(int argc, char const* argv[])
{
        //常数据成员的使用
        Date date1(1998, 4, 28);
        date1.showDate();
        Date const date2(1957, 2, 26);
        date2.showDate();
        return 0;
}

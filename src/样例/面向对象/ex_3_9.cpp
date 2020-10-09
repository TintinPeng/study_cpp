/*
 * @Author: your name
 * @Date: 2020-08-11 16:21:33
 * @LastEditTime: 2020-08-31 01:52:25
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/ex_3_9.cpp
 */
#include "iostream"
using namespace std;

class Date {
private:
        int year;
        int month;
        int day;

public:
        Date();
        Date(int y, int m, int d);
        ~Date();
        void showDate();
};

Date::Date()
{
        year = 2000;
        month = 1;
        day = 1;
}

Date::Date(int y, int m, int d)
{
        year = y;
        month = m;
        day = d;
}

Date::~Date()
{
        cout << "析构函数被调用" << endl;
}

inline void Date::showDate()
{
        cout << year << "-" << month << "-" << day << endl;
}

int main(int argc, char const* argv[])
{

        // 构造函数重载的应用

        Date date1, date2(2020, 8, 11);
        cout << "date1是:";
        date1.showDate();
        cout << "date2是:";
        date2.showDate();
        return 0;
}

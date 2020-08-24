/*
 * @Author: your name
 * @Date: 2020-08-24 19:16:34
 * @LastEditTime: 2020-08-24 20:45:14
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

Date::Date(int y, int m, int d)
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
    Date date1(1998, 4, 28);
    date1.showDate();
    cout << "" << endl;
    return 0;
}

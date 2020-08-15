/*
 * @Author: your name
 * @Date: 2020-08-12 08:18:52
 * @LastEditTime: 2020-08-12 09:21:35
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/ex_3_11.cpp
 */
#include "iostream"
using namespace std;
class timer {
private:
    int seconds;

public:
    timer()
    {
        seconds = 0;
    }

    timer(string t)
    {
        seconds = stoi(t);
    }

    timer(int t)
    {
        seconds = t;
    }

    timer(int min, int sec)
    {
        seconds = min * 60 + sec;
    }

    int gettimes()
    {
        return seconds;
    }

    ~timer()
    {
    }
};

int main(int argc, char const* argv[])
{
    /* code */
    timer a;
    timer b(10);
    timer c("100");
    timer d(1, 10);
    cout << "seconds = " << a.gettimes() << endl;
    cout << "seconds = " << b.gettimes() << endl;
    cout << "seconds = " << c.gettimes() << endl;
    cout << "seconds = " << d.gettimes() << endl;
}

/*
 * @Author: your name
 * @Date: 2020-08-12 10:22:00
 * @LastEditTime: 2020-08-12 10:33:16
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_3_17.cpp
 */
#include "iostream"

using namespace std;

class exe {
private:
    int x;

public:
    exe(/* args */)
    {
    }

    ~exe()
    {
    }

    void set_a(int a)
    {
        x = a;
    }

    void show_a()
    {
        cout << x << endl;
    }
};

int main(int argc, char const* argv[])
{
    /*
     * 对象指针的引用
     */
    exe ob[2], *p;
    ob[0].set_a(5);
    ob[1].set_a(10);

    p = ob;

    ob[0].show_a();
    ob[1].show_a();

    p->show_a();
    (*p).show_a();

    p++;

    p->show_a();
    (*p).show_a();

    return 0;
}

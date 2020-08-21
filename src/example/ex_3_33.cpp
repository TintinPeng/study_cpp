/*
 * @Author: your name
 * @Date: 2020-08-21 08:54:19
 * @LastEditTime: 2020-08-21 09:02:19
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_3_33.cpp
 */

#include "iostream"
using namespace std;

class Girl {
private:
    string name;
    int age;

public:
    Girl(string n, int d);
    ~Girl();
    friend void disp(Girl&);
};

Girl::Girl(string n, int d)
{
    name = n;
    age = d;
}

Girl::~Girl()
{
}

void disp(Girl& x)
{
    cout << "女孩的姓名是:" << x.name << "\t"
         << "年龄是:" << x.age << endl;
}

int main(int argc, char const* argv[])
{
    Girl g1("陈晓丽", 18);
    disp(g1);
    return 0;
}

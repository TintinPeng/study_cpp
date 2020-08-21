/*
 * @Author: your name
 * @Date: 2020-08-21 09:04:36
 * @LastEditTime: 2020-08-21 10:36:03
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_3_34.cpp
 */
#include "iostream"

using namespace std;

class Girl;
class Boy;

class Boy {
private:
    string name;
    int age;

public:
    Boy(string, int);
    ~Boy();
    void prdata(const Girl&);
};

Boy::Boy(string N, int A)
{
    name = N;
    age = A;
}

Boy::~Boy()
{
}

class Girl {
private:
    string name;
    int age;

public:
    Girl(string, int);
    ~Girl();
    friend void Boy::prdata(const Girl&);
};

Girl::Girl(string N, int A)
{
    name = N;
    age = A;
}

Girl::~Girl()
{
}

void Boy::prdata(const Girl& G)
{
    cout << "女孩的姓名:" << G.name << endl;
    cout << "女孩的年龄:" << G.age << endl;
    cout << "男孩的姓名:" << name << endl;
    cout << "男孩的年龄:" << age << endl;
}

int main(int argc, char const* argv[])
{
    Girl G[3] = {
        Girl("小刘", 18),
        Girl("小李", 18),
        Girl("小白", 18)
    };
    Boy B[3] = {
        Boy("老刘", 38),
        Boy("老李", 38),
        Boy("老白", 38)
    };

    for (int i = 0; i < 3; i++) {
        B[i].prdata(G[i]);
    }

    return 0;
}

/*
 * @Author: your name
 * @Date: 2020-08-21 09:04:36
 * @LastEditTime: 2020-08-21 10:56:22
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_3_34.cpp
 */
#include "iostream"

using namespace std;

class Girl;
class Boy;

class Girl {
private:
    string name;
    int age;

public:
    Girl(string, int);
    ~Girl();
    friend void prdata(const Girl&, const Boy&);
};

Girl::Girl(string N, int A)
{
    name = N;
    age = A;
}

Girl::~Girl()
{
}

class Boy {
private:
    string name;
    int age;

public:
    Boy(string, int);
    ~Boy();
    friend void prdata(const Girl&, const Boy&);
};

Boy::Boy(string N, int A)
{
    name = N;
    age = A;
}

Boy::~Boy()
{
}

void prdata(const Girl& G, const Boy& B)
{
    cout << "女孩的姓名:" << G.name << endl;
    cout << "女孩的年龄:" << G.age << endl;
    cout << "男孩的姓名:" << B.name << endl;
    cout << "男孩的年龄:" << B.age << endl;
}

int main(int argc, char const* argv[])
{
    /*
     * 一个函数同时为两个类的友元函数
     */
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
        prdata(G[i], B[i]);
    }

    return 0;
}

/*
 * @Author: your name
 * @Date: 2020-08-24 13:56:35
 * @LastEditTime: 2020-08-25 09:12:31
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_3_40.cpp
 */
#include "iostream"

using namespace std;

class Sample {
private:
    int n;

public:
    int m;
    Sample(int, int);
    ~Sample();
    void setVlaue(int);
    void display();
};

Sample::Sample(int i, int j)
{
    m = i, n = j;
}

Sample::~Sample()
{
}

void Sample::setVlaue(int i)
{
    n = i;
}

void Sample::display()
{
    cout << "m=" << m << endl;
    cout << "n=" << n << endl;
}

int main(int argc, char const* argv[])
{
    /*
     * 常对象不能被赋值
     */
    // Sample const a(10, 20);
    Sample a(10, 20);
    a.setVlaue(40); //不允许更改常对象的数据成员
    a.m = 30;
    a.display(); //常对象不能调用普通成员函数
    return 0;
}

/*
 * @Author: your name
 * @Date: 2020-08-26 09:19:51
 * @LastEditTime: 2020-08-26 09:53:27
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_4_6.cpp
 */
#include "iostream"

using namespace std;

class Student {
protected:
    int number;
    string name;
    float score;

public:
    Student(int _number, string _name, float _score)
    {
        number = _number;
        name = _name;
        score = _score;
    }
    ~Student() { }
    void printStuInfo()
    {
        cout << "number:" << number << endl;
        cout << "name:" << name << endl;
        cout << "score:" << score << endl;
    }
};

class UStuent : public Student {
private:
    string major;

public:
    UStuent(int _number, string _name, float _score, string _major)
        : Student(_number, _name, _score)
    {
        major = _major;
    }
    void printUStuInfo()
    {
        printStuInfo();
        cout << "majro:" << major << endl;
    }
};

int main(int argc, char const* argv[])
{
    //基类构造函数有参数,派生类的构造函数的使用
    UStuent stu_1(28, "张志", 4.5, "信息安全");
    stu_1.printUStuInfo();
    return 0;
}

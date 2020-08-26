/*
 * @Author: your name
 * @Date: 2020-08-26 11:01:30
 * @LastEditTime: 2020-08-26 11:06:42
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_4_10.cpp
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

class UStuent : private Student {
private:
    string major;

public:
    UStuent(int _number, string _name, float _score, string _major)
        : Student(_number, _name, _score)
    {
        major = _major;
    }
    void printStuInfo()
    {
        Student::printStuInfo();
        cout << "majro:" << major << endl;
    }
};

int main(int argc, char const* argv[])
{
    //派生类定义同名成员
    UStuent stu(28, "张志", 4.5, "信息安全");
    stu.printStuInfo();
    return 0;
}

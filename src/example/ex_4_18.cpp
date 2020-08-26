/*
 * @Author: your name
 * @Date: 2020-08-26 16:19:58
 * @LastEditTime: 2020-08-26 19:09:13
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_4_18.cpp
 */
#include "iostream"

using namespace std;

class Data_rec {
protected:
    string name;
    char sex;
    int age;

public:
    Data_rec(string _name, char _sex, int _age)
    {
        name = _name;
        sex = _sex;
        age = _age;
    }
    ~Data_rec() { }
};

class Student : virtual public Data_rec {
protected:
    string major;
    double score;

public:
    Student(string _name, char _sex, int _age, string _major, double _score)
        : Data_rec(_name, _sex, _age)
    {
        major = _major;
        score = _score;
    }
    ~Student() { }
};

class Employee : virtual public Data_rec {
protected:
    string dept;
    double salary;

public:
    Employee(string _name, char _sex, int _age, string _dept, double _salary)
        : Data_rec(_name, _sex, _age)
    {
        dept = _dept;
        salary = _salary;
    }
    ~Employee() { }
};

class E_Student : public Employee, public Student {
public:
    E_Student(string _name, char _sex, int _age, string _major, double _score, string _dept, double _salary)
        : Data_rec(_name, _sex, _age)
        , Student(_name, _sex, _age, _major, _score)
        , Employee(_name, _sex, _age, _dept, _salary)
    {
    }
    ~E_Student() { }
    void print();
};

void E_Student::print()
{
    cout << "name:" << name << endl;
    cout << "sex:" << sex << endl;
    cout << "age:" << age << endl;
    cout << "score:" << score << endl;
    cout << "major:" << major << endl;
    cout << "dept:" << dept << endl;
    cout << "salary:" << salary << endl;
}

int main(int argc, char const* argv[])
{
    //虚基类的简单应用举例
    E_Student E_Stu("张大", 'f', 34, "计算机", 95, "教务处", 3500);
    E_Stu.print();
    return 0;
}

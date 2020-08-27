/*
 * @Author: your name
 * @Date: 2020-08-27 16:35:41
 * @LastEditTime: 2020-08-27 16:53:21
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_4_21.cpp
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
    void print()
    {
        cout << "name:" << name << endl;
        cout << "sex:" << sex << endl;
        cout << "age:" << age << endl;
    }
};

class Student : virtual public Data_rec {
protected:
    string major;
    double score;

public:
    Student(string _name, char _sex, int _age,
        string _major, double _score)
        : Data_rec(_name, _sex, _age)
    {
        major = _major;
        score = _score;
    }
    ~Student() { }
    void print()
    {
        Data_rec::print();
        cout << "score:" << score << endl;
        cout << "major:" << major << endl;
    }
};

class Employee : virtual public Data_rec {
protected:
    string dept;
    double salary;

public:
    Employee(string _name, char _sex, int _age,
        string _dept, double _salary)
        : Data_rec(_name, _sex, _age)
    {
        dept = _dept;
        salary = _salary;
    }
    ~Employee() { }
    void print()
    {
        Data_rec::print();
        cout << "department:" << dept << endl;
        cout << "salary:" << salary << endl;
    }
};

class Teacher : public Employee {
private:
    /* data */

protected:
    string title;

public:
    Teacher(string _name, char _sex, int _age,
        string _dept, double _salary,
        string _title)
        : Data_rec(_name, _sex, _age)
        , Employee(_name, _sex, _age, _dept, _salary)
    {
        title = _title;
    }
    ~Teacher() { }
    void print()
    {
        Employee::print();
        cout << "title:" << title << endl;
    }
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
    void print()
    {
        Student::print();
        cout << "department:" << dept << endl;
        cout << "salary:" << salary << endl;
    }
};

int main(int argc, char const* argv[])
{
    Student stu("李晓敏", 'f', 22, "应用数学", 90);
    cout << "Student:" << endl;
    stu.print();

    Employee emp("黄柏松", 'm', 55, "科研处", 5000);
    cout << "Employee:" << endl;
    emp.print();

    Teacher tea("王世明", 'm', 34, "管理学院", 8000, "教授");
    cout << "Teacher:" << endl;
    tea.print();

    E_Student E_Stu("张大", 'f', 34, "计算机", 95, "教务处", 3500);
    cout << "E_Student:" << endl;
    E_Stu.print();

    return 0;
}

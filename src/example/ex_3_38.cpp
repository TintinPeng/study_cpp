/*
 * @Author: your name
 * @Date: 2020-08-22 10:53:24
 * @LastEditTime: 2020-08-31 00:27:09
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_3_38.cpp
 */
#include "iostream"

using namespace std;

class Score {
private:
        float computer;
        float english;
        float mathematics;

public:
        Score(float c = 0, float e = 0, float m = 0);
        ~Score();
        void show();
};

Score::Score(float c, float e, float m)
{
        computer = c;
        english = e;
        mathematics = m;
}

Score::~Score()
{
}

void Score::show()
{
        cout << "计算机成绩:" << computer << endl;
        cout << "英语成绩:" << english << endl;
        cout << "数学成绩:" << mathematics << endl;
}

class Student {
private:
        string name;
        string stu_no;
        Score _score;

public:
        Student(string _name, string _stu_no, float s1, float s2, float s3);
        ~Student();
        void show();
};

Student::Student(string _name, string _stu_no, float s1, float s2, float s3)
        : _score(s1, s2, s3)
{
        name = _name;
        stu_no = _stu_no;
}

Student::~Student()
{
}

void Student::show()
{
        cout << "姓名" << name << endl;
        cout << "学号" << stu_no << endl;
        _score.show();
}

int main(int argc, char const* argv[])
{
        /*
     * 对象成员的初始化
     */
        Student stu1("李小明", "123456", 98, 87, 46);
        stu1.show();
        cout << endl;
        Student stu2("张老二", "456879", 82, 89, 90);
        stu2.show();
        return 0;
}

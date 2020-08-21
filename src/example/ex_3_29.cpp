/*
 * @Author: your name
 * @Date: 2020-08-12 17:01:20
 * @LastEditTime: 2020-08-21 17:08:07
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_3_29.cpp
 */

#include "iostream"
using namespace std;
class Student {
private:
    string name;
    string stu_no;
    float score;
    static int count;
    static float sum;
    static float ave;

public:
    Student(string _name, string _stu_no, float _score);
    ~Student();
    void show_student();
    void show_summary();
};
int Student::count = 0;
float Student::sum = 0;
float Student::ave = 0;

Student::Student(string _name, string _stu_no, float _score)
{
    name = _name;
    stu_no = _stu_no;
    score = _score;
    count++;
    sum = sum + score;
    ave = sum / count;
}

Student::~Student()
{
    count--;
    sum = sum - score;
}

void Student::show_student()
{
    cout << "姓名" << name << endl;
    cout << "学号" << stu_no << endl;
    cout << "成绩" << score << endl;
}

void Student::show_summary()
{
    cout << "姓名人数:" << count << endl;
    cout << "成绩求和:" << sum << endl;
    cout << "平均成绩:" << ave << endl;
}

int main(int argc, char const* argv[])
{
    /*
     * 静态数据成员的使用
     * 静态数据成员应该在类外定义
     */
    Student stu0("李明", "00001", 90);
    stu0.show_student();
    stu0.show_summary();
    cout << "----------------------" << endl;
    Student stu1("周华", "00002", 80);
    stu1.show_student();
    stu1.show_summary();
    return 0;
}

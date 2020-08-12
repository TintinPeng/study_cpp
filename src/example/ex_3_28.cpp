/*
 * @Author: your name
 * @Date: 2020-08-12 16:35:29
 * @LastEditTime: 2020-08-12 17:00:44
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_3_28.cpp
 */
#include "iostream"
using namespace std;
class Student {
private:
    string name;
    string stu_no;
    float score;
    int count;
    float sum;
    float ave;

public:
    Student(string _name, string _stu_no, float _score);
    ~Student();
    void show_student();
    void show_summary();
};

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
    Student stu[2] = {
        Student("李明", "00001", 90),
        Student("周华", "00002", 80)
    };
    stu[0].show_student();
    stu[0].show_summary();
    stu[1].show_student();
    stu[1].show_summary();
    return 0;
}

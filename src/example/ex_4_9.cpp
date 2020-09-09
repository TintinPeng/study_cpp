/*
 * @Author: your name
 * @Date: 2020-08-26 10:25:13
 * @LastEditTime: 2020-08-26 10:46:57
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/example/ex_4_9.cpp
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
        Student auditor1;
        Student auditor2;

public:
        UStuent(int _number, string _name, float _score, int _number1, string _name1, float _score1, int _number2, string _name2, float _score2, string _major)
                : Student(_number, _name, _score)
                , auditor1(_number1, _name1, _score1)
                , auditor2(_number2, _name2, _score2)
        {
                major = _major;
        }
        void printUStuInfo_formal()
        {
                cout << "正式生:" << endl;
                printStuInfo();
                cout << "majro:" << major << endl;
        }
        void printUStuInfo_auditor1()
        {
                cout << "旁听生" << endl;
                auditor1.printStuInfo();
        }
        void printUStuInfo_auditor2()
        {
                cout << "旁听生" << endl;
                auditor2.printStuInfo();
        }
};

int main(int argc, char const* argv[])
{
        //多个对象成员派生类的例子
        //这个程序只是为了举例,正常情况下应该没有这么写的
        UStuent stu(28, "张志", 4.5, 29, "刘伟", 4.0, 30, "王大斌", 3.8, "信息安全");
        stu.printUStuInfo_formal();
        stu.printUStuInfo_auditor1();
        stu.printUStuInfo_auditor2();
        return 0;
}

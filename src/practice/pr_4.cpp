/*
 * @Author: your name
 * @Date: 2020-08-17 16:54:20
 * @LastEditTime: 2020-08-17 19:00:54
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/src/practice/pr_4.cpp
 */

#include "iomanip"
#include "iostream"
using namespace std;

int main(int argc, char const* argv[])
{
        double x = 12.345;
        cout << "默认状态:" << x << endl;
        cout << endl;
        for (int i = 0; i < 7; i++) {
                cout << "保留小数点" << i << "位:";
                cout.setf(ios::fixed);
                cout << setprecision(i);
                cout << x << endl;
        }
        cout << endl;
        cout << "恢复默认状态:";
        cout.unsetf(ios::fixed);
        cout << setprecision(6) << x << endl;
        return 0;
}

/* 
     * 保留小数位数
     * //第一种写法
	 * cout<<setiosflags(ios::fixed)<<setprecision(2);
     * //第二种写法
     * cout.setf(ios::fixed);
     * cout<<setprecision(2);
     * //第三种写法
     * cout<<fixed<<setprecision(2);
     * 
     * setprecision(n) 功能：控制浮点数显示的有效数字个数
     * 
     */
// int a = 350;
// float b = 1.4;
// double c = 1.5;
// cout << fixed << setprecision(2);
// cout << a << "\t" << b << "\t" << c << endl;
/*
     * 
     * 补充一小点showpoint
     */
// double s = 12.345;
// // cout << fixed;
// cout << s << endl; //输出原数12.345
// cout << setprecision(2);
// cout << s << endl; //输出保留两位有效数字12
// cout.setf(ios::showpoint); //或者写cout<<setiosflags(ios::showpoint);
// cout << s << endl; //输出保留两位有效数字外加一个小数点12.

//cout.width(8); //设置输出宽度
// cout.setf(ios::right); // 设置对齐方式
// cout.fill('0'); //将多余的空格用0填充
// cout.setf(ios::showpoint);
// cout << fixed << setprecision(i) << x << endl;

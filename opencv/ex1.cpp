/*
 * @Author: your name
 * @Date: 2020-08-03 10:05:49
 * @LastEditTime: 2020-08-04 20:28:44
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /study_cpp/opencv/ex1.cpp
 */

#include "iostream"
#include "opencv4/opencv2/opencv.hpp"
#include "opencv4/opencv2/highgui.hpp"
#include "opencv4/opencv2/core.hpp"

using namespace std;
using namespace cv;

int main()
{
    string filename = "./opencv/pictures/001.png";
    Mat img = imread(filename);
    namedWindow(filename, 0);
    imshow(filename, img);
    waitKey(0);
}
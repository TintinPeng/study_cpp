/*
 * @Author: your name
 * @Date: 2020-08-03 10:05:49
 * @LastEditTime: 2020-08-03 17:07:16
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
    string filename = "./opencv/001.png";
    Mat img = imread(filename);
    auto size = img.size();
    int w = size.width;
    int h = size.height;
    Mat re_image;
    resize(img, re_image, Size(w / 2, h / 2));
    while (true)
    {
        imshow(filename, re_image);
        int k = waitKey(0);
        if (k == 27)
        {
            break;
        }
    }
    destroyAllWindows();
}

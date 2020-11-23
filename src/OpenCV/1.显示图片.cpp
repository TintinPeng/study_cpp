#include "iostream"
#include "opencv4/opencv2/core.hpp"
#include "opencv4/opencv2/highgui.hpp"
#include "opencv4/opencv2/opencv.hpp"

using namespace std;
using namespace cv;

const string workspace = "/home/tintin/Workspaces/VSCode/cpp/src/OpenCV";

int main()
{
	string filename = workspace + "/pictures/1.JPG";
	Mat	   img = imread(filename);
	namedWindow(filename, WINDOW_AUTOSIZE);
	imshow(filename, img);
	waitKey(0);

	return 0;
}

#include "highgui.h"
#include <iostream>

using namespace std;
using namespace cv;

int main(int argc, char* argv[])
{
	// A donner en parametre
	const string path = "X:/MultiViewTracker/Calibrations/test/Foot001DR/Images";
	const string extension = ".JPG";
	const unsigned int num_digits = 4;

	/***** Test imread et show image
	*/Mat image = imread("X:/MultiViewTracker/Calibrations/test/Foot001DR/Images/Camera0_0000.JPG");
	imshow("Test", image);
	waitKey();
}
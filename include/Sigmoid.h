#pragma once
#include <iostream>
#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;

class Sigmoid {
public:
	Sigmoid();
	~Sigmoid();
	Mat Activation(Mat input);
	Mat DeActivation(Mat input);
};
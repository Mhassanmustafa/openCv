// program to detect the picels from screen
/*
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std; //std is the standard namespace you can also call these functions using std::cout

int main()

{
	Mat image; //
	image = imread("D:\download.jpg");   // Read the file

	if (!image.data)                              // Check for invalid input
	{
		cout << "Could not open or find the image" << endl;
		return -1;
	}

	//namedWindow("Display window", WINDOW_AUTOSIZE);// Create a window for display.
	//imshow("Display window", image);                   // Show our image inside it.


	Mat result;
	inRange(image, Scalar(100, 0, 0), Scalar(255, 100, 100), result);
	namedWindow("Display window", WINDOW_AUTOSIZE);// Create a window for display.
	imshow("Display window", result);
	int x = countNonZero(result);
	cout << "no>of pixels" << x;

	waitKey(0);                                          // Wait for a keystroke in the window
	return 0;
}
*/

/*
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std; //std is the standard namespace you can also call these functions using std::cout

int main()

{
	int b = 10;
	int g = 50;
	int r = 100;



	Mat image; //
	image = imread("D:\download.jpg");   // Read the file

	if (!image.data)                              // Check for invalid input
	{
		cout << "Could not open or find the image" << endl;
		return -1;
	}
	
	for (int i = 0; i < image.rows; i++) {
		for (int j = 0; j < image.cols; j++) {

			image.at<Vec3b>(i, j)[0] = b;
			image.at<Vec3b>(i, j)[1] = g;
			image.at<Vec3b>(i, j)[2] = r;
		}
		b = b + 5;
		g = g + 4;
		r = r + 15;
	}
	
	for (int i = 0; i < image.cols; i++) {
		for (int j = 0; j < image.rows; j++) {

			image.at<Vec3b>(j, i)[0] = b;
			image.at<Vec3b>(j, i)[1] = g;
			image.at<Vec3b>(j, i)[2] = r;
			b = b + rand();
			g = g + rand();
			r = r + rand();
		}
		
	}

	//cout << "size" << image.rows << "x" << image.cols;



	namedWindow("Display window", WINDOW_AUTOSIZE);// Create a window for display.
	imshow("Display window", image);


	waitKey(0);                                          // Wait for a keystroke in the window
	return 0;
}
*/

/*
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std; //std is the standard namespace you can also call these functions using std::cout

int main()

{
	Mat image; //
	image = imread("D:\download.jpg");   // Read the file

	if (!image.data)                              // Check for invalid input
	{
		cout << "Could not open or find the image" << endl;
		return -1;
	}

	cout << "size" << image.rows << "x" << image.cols;


	namedWindow("Display window", WINDOW_AUTOSIZE);// Create a window for display.
	imshow("Display window", image);


	waitKey(0);                                          // Wait for a keystroke in the window
	return 0;
}
*/
/*
//camera opening in opencv
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std; //std is the standard namespace you can also call these functions using std::cout

int main()

{
	VideoCapture cap(0);
	while (1) {
		Mat frame;
		bool bsuccess = cap.read(frame);
		namedWindow("Display window", WINDOW_AUTOSIZE);// Create a window for display.
		imshow("Display window", frame);

		if (waitKey(20) == 27) {

			cout << "ESC key is pressed" << endl;
			break;
		}                                         // Wait for a keystroke in the window

	}
	return 0;
}
*/

/*
//all pixcel detection
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std; //std is the standard namespace you can also call these functions using std::cout

int main()

{
	Mat image; //
	image = imread("D:\download.jpg");   // Read the file

	if (!image.data)                              // Check for invalid input
	{
		cout << "Could not open or find the image" << endl;
		return -1;
	}

	//namedWindow("Display window", WINDOW_AUTOSIZE);// Create a window for display.
	//imshow("Display window", image);                   // Show our image inside it.


	Mat result, result1, result2;
	inRange(image, Scalar(100, 0, 0), Scalar(255, 100, 100), result);
	inRange(image, Scalar(0, 0, 100), Scalar(100, 100, 255), result1);
	inRange(image, Scalar(0, 100, 0), Scalar(100, 255, 100), result2);

	namedWindow("Display window", WINDOW_AUTOSIZE);// Create a window for display.
	imshow("Display window", result);
	int x = countNonZero(result);
	cout << "no.of pixels blue=" << x;
	int y = countNonZero(result1);
	cout << "\nno.of pixels red=" << y;
	int z = countNonZero(result2);
	cout << "\nno.of pixels green=" << z;

	Mat Combine = result | result1 | result2;

	

	imshow("combile", Combine);
	waitKey(0);                                          // Wait for a keystroke in the window
	return 0;
}



*/

/*
//convert pic into blur
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std; //std is the standard namespace you can also call these functions using std::cout

int main()

{
	Mat image; //
	image = imread("D:\download.jpg");   // Read the file

	if (!image.data)                              // Check for invalid input
	{
		cout << "Could not open or find the image" << endl;
		return -1;
	}

	for (int i = 0; i < image.rows; i++) {
		for (int j = 0; j < image.cols; j++) {
			image.at<Vec3b>(i, j)[0] = 255;
			image.at<Vec3b>(i, j)[1] = 0;
			image.at<Vec3b>(i, j)[2] = 0;

		}


	}
	namedWindow("Display window", WINDOW_AUTOSIZE);// Create a window for display.
	imshow("Display window", image);


	waitKey(0);                                          // Wait for a keystroke in the window
	return 0;
}
*/
/*
//face detection
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std; //std is the standard namespace you can also call these functions using std::cout

int main()

{

	VideoCapture cap(0);
	while (1) {
		Mat frame;
		bool bsuccess = cap.read(frame);
		namedWindow("Display window", WINDOW_AUTOSIZE);// Create a window for display.
		imshow("Display window", frame);

		Mat result1;
		inRange(frame, Scalar(100, 0, 0), Scalar(255, 100, 100), result1); //Blue
		imshow("Display window1", result1);

		Mat result2;
		inRange(frame, Scalar(0, 100, 0), Scalar(100, 255, 100), result2); //Green
		imshow("Display window2", result2);

		Mat result3;
		inRange(frame, Scalar(0, 0, 100), Scalar(100, 100, 255), result3); //Red
		imshow("Display window3", result3);

		if (waitKey(20) == 27) {
			cout << "ESC key is pressed" << endl;
			break;
		}

	}
	return 0;
}
*/

//pic flip
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std; //std is the standard namespace you can also call these functions using std::cout

int main()

{
	Mat image; //
	image = imread("D:\download.jpg");   // Read the file

	if (!image.data)                              // Check for invalid input
	{
		cout << "Could not open or find the image" << endl;
		return -1;
	}

	//namedWindow("Display window", WINDOW_AUTOSIZE);// Create a window for display.
	//imshow("Display window", image);                   // Show our image inside it.


	Mat result;
	flip(image, result, -1);
	namedWindow("Display window", WINDOW_AUTOSIZE);// Create a window for display.
	imshow("Display window", result);

	waitKey(0);                                          // Wait for a keystroke in the window
	return 0;
}

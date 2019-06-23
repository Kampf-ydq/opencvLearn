#include<opencv2\opencv.hpp>
#include<iostream>
using namespace cv; //opencv命名空间包含
using namespace std;

int main()
{
	//【1】Mat数据结构
	Mat dst(3,3,CV_8UC2,Scalar(0,0,255));
	cout << "Mat dst = " << dst << endl;

	int dstRow = dst.rows;
	int dstCol = dst.cols * dst.channels();
	cout << "the row and col of dst is: " << dstRow << ", " << dstCol << endl;

	//【2】点坐标
	Point2i p1(2, 5);
	cout << "二维坐标： " << p1 << endl;

	Point3i p2(0, 2, 6);
	cout << "三维坐标： " << p2 << endl;

	vector<Point2f> pointVec(5);
	for (int i = 0; i < pointVec.size(); i++)
	{
		pointVec[i] = Point2f((float)(i * 2), (float)(i % 3));
	}
	cout << "二维点向量" << pointVec << endl;
	return 0;
}
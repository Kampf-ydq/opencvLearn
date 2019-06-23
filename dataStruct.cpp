#include<opencv2\opencv.hpp>
#include<iostream>
using namespace cv; //opencv�����ռ����
using namespace std;

int main()
{
	//��1��Mat���ݽṹ
	Mat dst(3,3,CV_8UC2,Scalar(0,0,255));
	cout << "Mat dst = " << dst << endl;

	int dstRow = dst.rows;
	int dstCol = dst.cols * dst.channels();
	cout << "the row and col of dst is: " << dstRow << ", " << dstCol << endl;

	//��2��������
	Point2i p1(2, 5);
	cout << "��ά���꣺ " << p1 << endl;

	Point3i p2(0, 2, 6);
	cout << "��ά���꣺ " << p2 << endl;

	vector<Point2f> pointVec(5);
	for (int i = 0; i < pointVec.size(); i++)
	{
		pointVec[i] = Point2f((float)(i * 2), (float)(i % 3));
	}
	cout << "��ά������" << pointVec << endl;
	return 0;
}
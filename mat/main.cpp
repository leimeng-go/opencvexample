#include <iostream>
#include <opencv2/opencv.hpp>

int main() {
    using namespace std;
    using namespace cv;
    // 创建4行4列，图像像素类型是8位无符号字节类型单通道
    Mat m1(4,4,CV_8UC1,Scalar(255));
    cout << "m1: \n" << m1 << endl;
    // 创建4行4列，图像像素类型是8位无符号字节类型3通道
    Mat m2(Size(4,4),CV_8UC3,Scalar(0,0,255));
    cout << "m2: \n" << m2 << endl;
    // 创建4行4列，图像像素类型是8位无符号字节类型3通道，使用all初始化
    Mat m3(Size(4,4),CV_8UC3,Scalar::all(255));
    cout << "m3: \n" << m3 << endl;
    //
    Mat m4=Mat::zeros(Size(4,4),CV_8UC3);
    cout<< "m4:\n" << m4 << endl;

    Mat m5=Mat::ones(Size(4,4),CV_8UC3);
    cout << "m5\n" << m5 << endl;

    Mat m6=m4.clone();
    cout << "m6\n" << m6 << endl;

    Mat m7;
    m2.copyTo(m7);
    cout << "m7:\n" << m7 << endl;

    Mat m8 =(Mat_<double>(3,3)<< 0,-1,0,-1,5,-1,0,-1,0);
    cout << "m8:\n" << m8 << endl;
}

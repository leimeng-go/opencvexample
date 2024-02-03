#include <iostream>
#include <opencv2/opencv.hpp>

int main() {
    using namespace std;
    using namespace cv;
    string rootDir = "/Users/menglei/workspace/opencv/samples/data/";
    Mat anyColor = imread(rootDir+"lena.jpg",IMREAD_UNCHANGED);
    vector<int> opts;
    opts.push_back(IMWRITE_JPEG_QUALITY);
    opts.push_back(80);
    opts.push_back(IMWRITE_JPEG_OPTIMIZE);
    opts.push_back(22),
    imwrite("./src.jpg",anyColor,opts);
    return  0;
}

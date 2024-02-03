#include <iostream>
#include <opencv2/opencv.hpp>
int main() {
    using namespace std;
    using namespace cv;
    string rootDir= "/Users/menglei/workspace/opencv/samples/data/";

    Mat image= imread(rootDir+"lena.jpg", IMREAD_UNCHANGED);
    if (image.empty()){
        printf("could not load image...\n");
        return -1;
    };
    namedWindow("input",WINDOW_AUTOSIZE);
    imshow("input",image);
    waitKey(0);
    destroyAllWindows();
    return 0;
}

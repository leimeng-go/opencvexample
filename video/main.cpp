#include <iostream>
#include <opencv2/opencv.hpp>

int main() {
   using namespace std;
   using namespace cv;
   string rootDir = "/Users/menglei/workspace/opencv/samples/data/";
   VideoCapture capture;
   capture.open(0,CAP_ANY);
//   capture.open(rootDir+"vtest.avi",CAP_FFMPEG);
   Mat frame;
    while (true){
        bool ret=capture.read(frame);
        if (!ret) break;
        imshow("frame",frame);
        //添加帧处理,停顿100ms?
        char c= waitKey(100);
        if (c==27) {
            break;
        }
    }
    waitKey(0);
    destroyAllWindows();
    return 0;
}

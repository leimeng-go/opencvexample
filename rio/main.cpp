#include <iostream>
#include <opencv2/opencv.hpp>

int main() {
   using namespace std;
   using namespace cv;
   string rootDir="/Users/menglei/workspace/opencv/samples/data/";

   //读取原始图片
   Mat image = imread(rootDir+"lena.jpg");
   //展示原始图片
   imshow("input",image);
   // region of interest 图片
   Rect rect(50,50,200,200);
   Mat roi=image(rect);
   imshow("roi",roi);

    waitKey(0);
    return 0;
}

#include <bits/stdc++.h>
#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;
int main(){

  Mat img = imread("C:\Users\KIIT\Documents\Comp_Code\IMG_20230209_213622-01.jpeg");
  
  if (img.empty())
  {
    -

    cout << "Image not found" << endl;
    return -1;
  }
  imshow("Image", img);
  waitKey(0);

  return 0;
}

// A spherical tank of radius R is filled with a volume V of liquid. What is the depth h of the liquid?

// Input Format:

// R
// V

// Output Format:

// h 

// Your program needs to read radius and volume from the standard input and emit only the height in its standard output as given in the examples below. Please note, the input and output has been rounded-off to seven decimal places.

// Ex1:

// Input:
// 9.4101888
// 2526.5557948

// Output Format:
// 12.3105929


// Ex2:

// Input:
// 7.4551911
// 348.9145181

// Output Format:
// 4.2938338
#include<bits/stdc++.h>
using namespace std;


int main()
{
    double r,v;
    cin>>r>>v;
    double h=(2*r*r)/v;
    h=1-h;
    h=sqrt(h);
    h=r-h;
    cout<<setprecision(7)<<fixed<<h;
    

    
  return 0;
}

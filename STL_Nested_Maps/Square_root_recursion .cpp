#include<bits/stdc++.h>
using namespace std;
double eps=0.0;
double square_root(double x, double y){
     double dif=y*x-x;
     if(dif<0.0){
      dif=-dif;
     }
     if(dif<eps){
      return y;
     }
     else{
     return (square_root(x,(y+x/y)/2.0));
     }
}
int main()
{
    double x;
    double y;
    cin>>x;
    cin>>y;
    cout<<(square_root(x,y));


  return 0;
}
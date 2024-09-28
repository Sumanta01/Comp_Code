#include<bits/stdc++.h>
using namespace std;
int squareRoot(int n){
    if(n<2){
        return n;
    }
    int beg=1,end=n;
    while(beg<=end){
        int mid=beg+(end-beg)/2;
        if((mid*mid)==n){
            return mid;
        }
        if(n>(mid*mid)){
            beg=mid+1;
        }else{
            end=mid-1;
        }
    }
    return end;
}
int main()
{
    int n;
    cin>>n;
    cout<<squareRoot(n)<<endl;
  return 0;
}
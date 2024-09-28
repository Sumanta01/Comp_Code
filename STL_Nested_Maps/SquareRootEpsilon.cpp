#include<bits/stdc++.h>
using namespace std;
double epsilon=1e-6;
double squareRoot(int n){
    if(n<0){
        return -1;
    }
    if(n<2){
        return n;
    }
    double low=0.0,high=n;
    while(high-low>epsilon){
        double mid=low+(high-low)/2.0;
        double square=mid*mid;
        if(square==n){
            return mid;
        }
        if(square<n){
            low=mid;
        }
        else{
            high=mid;
        }

    }
    return low; 
    
}
int main()
{
    int n;
    cin>>n;
    cout<<setprecision(4)<<squareRoot(n)<<endl;

  return 0;
}
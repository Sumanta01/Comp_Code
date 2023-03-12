#include<bits/stdc++.h>
using namespace std;
double eps=1e-6;
double multiply(double mid,int n){
    double ans=1;
    for(int i=0;i<n;i++){
        ans*=mid;
    }
    return ans;
    
}
int main()
{
 double x;
 int n;
 cin>>x>>n;
 double beg=1,end=x;
    double mid;
    while(end-beg>eps){
        mid=(beg+end)/2;
        if(multiply(mid,n)<x){
            beg=mid;
        }
        else{
            end=mid;
        }
    }
    cout<<setprecision(3)<<beg<<"\n"<<end<<endl;
    cout<<pow(x,1.0/n);

  return 0;
}
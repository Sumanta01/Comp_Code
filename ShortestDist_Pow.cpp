#include<bits/stdc++.h>
using namespace std;

double  shortestDist(int a ,int b){
    
    double res=sqrt(pow(a,2)+pow(b,2));
    return res;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<fixed<<setprecision(2);
    cout<<shortestDist(a,b);
  return 0;
}
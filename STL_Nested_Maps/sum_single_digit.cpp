#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum;
    cin>>n;
    if(n){
        sum=n%9==0?9:n%9;
    }
    else{
        sum=0;
    }
    cout<<sum<<endl;


  return 0;
}
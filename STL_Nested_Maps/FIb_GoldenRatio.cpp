#include<bits/stdc++.h>
using namespace std;
int fibFormula(int n){
    double phi=(1+sqrt(5))/2;
    return round(pow(phi,n)/sqrt(5));
}
int main()
{
    int n;
    cin>>n;
    for (int i=0;i<n;i++){

        cout<<fibFormula(i)<<" ";
    }
    cout<<endl;
    cout<<(1+sqrt(5))/2<<endl;

  return 0;
}
  
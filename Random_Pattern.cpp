#include<bits/stdc++.h>
using namespace std;
void Print(int n){
    for(int i=0;i<=n;i++){
        for(int j=n-1;j>=0;j--){
            cout<<(j-i)<<" ";
        }
        cout<<endl;
    }
}
void pattern(int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<=n;j++){
           Print(j);
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    pattern(n);
    Print(n);
  return 0;
}
#include<bits/stdc++.h>
using namespace std;
void diffPattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=n;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    diffPattern(n);
  return 0;
}
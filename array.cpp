#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int arr[10];
    // arr[13]=22;
    // cout<<arr[13];
//  int n,sum=0;
//  cin>>n;
// int arr[n];
// for( int i=0;i<n;i++){
//     cin>>arr[i];
// }
//  for(int i=0;i<n;i++){
//     sum+=arr[i];
//  }
//  cout<<sum<<endl;

int n,m;
cin>>n>>m;
int arr[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}












 return 0;
}
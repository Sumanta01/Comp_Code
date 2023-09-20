#include<bits/stdc++.h>
using namespace std;
int findFeet(int arr[],int n){
    int feet=0;
    for(int i=0;i<n;i++){
         feet+=arr[i]/12;
    }
    return feet;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<findFeet(arr,n)<<endl;
  return 0;
}
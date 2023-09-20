#include<bits/stdc++.h>
using namespace std;
int largeSmall(int arr[],int n){
    int max=INT_MIN;
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return max-min;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i]; 
    }
    cout<<largeSmall(arr,n);
  return 0;
}
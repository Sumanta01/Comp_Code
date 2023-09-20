#include<bits/stdc++.h>
using namespace std;

int missingNumber(int arr[],int size){
    int n=size+1;
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    int totalSum=(n*(n+1))/2;
    int missingNumber=totalSum-sum;

    return missingNumber;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    cout<<missingNumber(arr,n);
  return 0;
}
#include<bits/stdc++.h>
using namespace std;

void Difference(int arr[],int n){
    int sum=0,sum1=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            sum+=arr[i];
        }
        else{
            sum1+=arr[i];
        }
    }
    cout<<sum-sum1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i]; 
    }
    Difference(arr,n);
  return 0;
}
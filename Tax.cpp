#include<bits/stdc++.h>
using namespace std;

int taxSolve(int arr[],int n){
    int tax=0;
    for(int i=0;i<n;i++){
        tax+=(arr[i]-1000)*0.1;
    }
    return (int) tax;

}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i]; 
    }
    cout<<taxSolve(arr,n);
  return 0;
}
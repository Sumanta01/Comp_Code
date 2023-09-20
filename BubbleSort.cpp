#include<bits/stdc++.h>
using namespace std;
void Bubble(int arr[],int n){
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                count++;
            }
        }
        if(count==0){
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    Bubble(arr,n);
  return 0;
}
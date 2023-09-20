#include<bits/stdc++.h>
using namespace std;

void RemoveDuplicate(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                for(int k=i;k<n;k++){
                    arr[k]=arr[k+1];
                }
                n--;
                i--;
            }
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
    RemoveDuplicate(arr,n);
    
   // RemoveDuplicate(arr,n);

   
    
  return 0;
}
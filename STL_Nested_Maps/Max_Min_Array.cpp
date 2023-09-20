#include<bits/stdc++.h>
using namespace std;
void findMax_Min(int arr[],int n){
    if(n==0){
        return;
    }
    int max=INT_MIN;
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        if (arr[i]>max){
            max=arr[i];

        }
    }
    cout<<"Max element is: "<<max<<endl;
    cout<<"Min element is: "<<min<<endl;
    
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    findMax_Min(arr,n);

  return 0;
}
#include<bits/stdc++.h>
using namespace std;

int BubbleSort(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        bool swapped=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swapped=true;
                count++;
            }
        }
        if(!swapped){
            break;
        }
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=BubbleSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Number of Swaps: "<<ans<<endl;
  return 0;
}
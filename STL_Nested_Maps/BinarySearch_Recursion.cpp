#include<bits/stdc++.h>
using namespace std;
int Binary_Search(int arr[],int beg ,int end, int key){
    if(beg>end){
        return -1;
    }
    int mid=beg+(end-beg)/2;
    if(arr[mid]==key){
        return mid;
    }
    if(key>arr[mid]){
        return Binary_Search(arr,mid+1,end,key);
    }
    
    return Binary_Search(arr,beg,mid-1,key);
    
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int beg=0,end=n-1;
    int ans=Binary_Search(arr,beg,end,key);
    cout<<ans<<endl;

  return 0;
}
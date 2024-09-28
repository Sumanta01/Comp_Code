#include<bits/stdc++.h>
using namespace std;
int Partition(int arr[],int h,int l){
    int i=l-1;
    int pivot=arr[h];
    for(int j=l;j<h;j++){
        if(arr[j]<pivot){
            i++;
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    i++;
    int temp=arr[i];
    arr[i]=pivot;
    arr[h]=temp;
    return i;
}
 void Quicksort(int arr[],int l,int h){
    if(l<h){
        int pivot=Partition(arr,h,l);
        Quicksort(arr,l,pivot-1);
        Quicksort(arr,pivot+1,h);
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
    int l=0;
    int h=n-1;
    Quicksort(arr,l,h);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }




  return 0;
}
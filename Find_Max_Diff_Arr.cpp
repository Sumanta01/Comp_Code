#include<bits/stdc++.h>
using namespace std;
int findMaxDiff(int arr[],int n){
    for(int i=0;i<n;i++){
        int max=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[max]){
                max=j;
            }
        }
        return max-i;

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
    cout<<findMaxDiff(arr,n);
  return 0;
}
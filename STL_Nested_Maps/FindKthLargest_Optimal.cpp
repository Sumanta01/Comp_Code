#include<bits/stdc++.h>
using namespace std;
int findKthLargest(vector<int>arr,int k){
    priority_queue<int,vector<int>,greater<int>>minHeap;
    for(int i:arr){
        minHeap.push(i);
        if(minHeap.size()>k){
            minHeap.pop();
        }
    }
    return minHeap.top();
        
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    cout<<findKthLargest(arr,k)<<endl;
    
  return 0;
}
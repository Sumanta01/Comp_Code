#include<bits/stdc++.h>
using namespace std;

vector<int>twoSum(vector<int>arr,int k){
    int n=arr.size();
    map<int ,int>mp;
    for(int i=0;i<n;i++){
        int ind=arr[i];
        int comp=k-ind;
        if(mp.find(comp)!= mp.end()){
            return {mp[comp],i};
        }
        mp[ind]=i;
    }
    return {-1,-1};
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
    vector<int>ans=twoSum(arr,k);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
  return 0;
}
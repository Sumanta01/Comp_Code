#include<bits/stdc++.h>
using namespace std;

vector<int>twoSum(vector<int>arr,int k){
    int n=arr.size();
    int l=0,r=n-1;
    sort(arr.begin(),arr.end());
    vector<int>ans;
    while(l<r){
        int sum=arr[l]+arr[r];
        if(sum==k){
            ans.push_back(l);
            ans.push_back(r);
            return ans;
    
        }
        else if (sum<k){
            l++;
        }
        else{
            r--;
        }
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
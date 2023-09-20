#include<bits/stdc++.h>
using namespace std;

vector<int>Two_Sum(vector<int>arr,int k){
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]+arr[j]==k){
                return {i,j};
            }
        }
    }
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
    vector<int>ans=Two_Sum(arr,k);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

  return 0;
}
#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>nums,int ind ,vector<vector<int>>&ans){
    if(ind>=nums.size()){
        ans.push_back(nums);
        return;
    }
    for(int i=ind;i<nums.size();i++){
        swap(nums[ind],nums[i]);
        solve(nums,ind+1,ans);
        // backtracking
        swap(nums[ind],nums[i]);
    }

}
vector<vector<int>>permute(vector<int>nums){
    vector<vector<int>>ans;
    int ind=0;
    solve(nums,ind,ans);
    return ans;
    
}
int main()
{
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<vector<int>>ans=permute(nums);
    for(auto it:ans){
        for(auto ok:it){
            cout<<ok<<" ";
        }
        cout<<endl;
    }
  return 0;
}
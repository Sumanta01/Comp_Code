#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>Subsets;


void generate(vector<int>&subset,int i,vector<int>&nums){
   if(i==nums.size()){
         Subsets.push_back(subset);
         return;
   }
   //ith element not in subset
    generate(subset,i+1,nums);
    subset.push_back(nums[i]);
    // ith element in subset
    generate(subset,i+1,nums);
    subset.pop_back();//Backtracking

}

int main()
{
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int>empty;
    generate(empty,0,nums);
    for(auto elm:Subsets){
        for(auto ele:elm){
            cout<<ele<<" ";
        }
        cout<<endl;
    }

  return 0;
}

#include<bits/stdc++.h>
using namespace std;
int reverseNum(int n){
    int rev=0;
    while(n>0){
        int r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    return rev;
}

int countNumberPairs(vector<int>&nums){
    int count=0;
    const int constraint=1e9+7;
    unordered_map<int,int>mp;
    for(int n:nums){
        int rev=reverseNum(n);
        int diff=n-rev;
        count=  (count+ mp[diff]) % constraint;
        mp[diff]++;
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<countNumberPairs(nums);
  return 0;
}
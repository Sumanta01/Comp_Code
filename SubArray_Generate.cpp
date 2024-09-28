#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>genSubArray(vector<int>arr){
   vector<vector<int>>ans;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<=arr.size();j++){
            vector<int>sub;
            for(int k=i;k<j;k++){
                sub.push_back(arr[k]);
            }
            ans.push_back(sub);

        }
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<vector<int>>res=genSubArray(arr);
    for(auto v:res){
        for(int i:v){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
  return 0;
}
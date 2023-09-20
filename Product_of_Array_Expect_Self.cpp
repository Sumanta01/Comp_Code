#include<bits/stdc++.h>
using namespace std;

vector<int>productExpectSelf(vector<int>arr){
    int n=arr.size();
    int left[n];
    int right[n];
    vector<int>ans(n);
    left[0]=1;
    for(int i=1;i<n;i++){
        left[i]=left[i-1] * arr[i-1];
    }
    right[n-1]=1;
    for(int i=n-2;i>-1;i--){
        right[i]=right[i+1] * arr[i+1];
    }
    for(int i=0;i<n;i++){
        ans[i]=left[i]*right[i];
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
    vector<int>ans=productExpectSelf(arr);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    
    
  return 0;
}
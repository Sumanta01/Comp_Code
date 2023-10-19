#include<bits/stdc++.h>
using namespace std;

int maxSubArrSum(vector<int>num){
    int sum=0;
    int max_sum=num[0];
    for(int i=0;i<num.size();i++){
        sum+=num[i];
        max_sum=max(sum,max_sum);
        if(sum<0){
            sum=0;
        }
    }
    return max_sum;
}
int main()
{
    int n;
    cin>>n;
    vector<int>num(n);
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    cout<<maxSubArrSum(num);
    
  return 0;
}
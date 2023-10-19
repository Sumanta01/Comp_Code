#include<bits/stdc++.h>
using namespace std;
int largeSum(vector<int>num){
    int large=0;
    for(int i=0;i<num.size();i++){
        for(int j=0;j<num.size();j++){
            if(i!=j){
              int sum=num[i]+num[j];
                if(sum>large){
                    large=sum;
                }
            }
        }
    }
    return large;
}
int main()
{
    int n;
    cin>>n;
    vector<int>num(n);
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    cout<<largeSum(num);
  return 0;
}
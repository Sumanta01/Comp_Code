#include<bits/stdc++.h>
using namespace std;
int findSecondLarge(vector<int>v){
    int first_large=INT_MIN;
    int second_large=INT_MIN;
    for(int i=0;i<v.size();i++){
        if(v[i]>first_large){
            second_large=first_large;
            first_large=v[i];
        }
        else if(v[i]>second_large && v[i]!=first_large){
            second_large=v[i];
        }
    }
    return second_large;
}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int ans=findSecondLarge(v);
    cout<<ans<<endl;
  return 0;
}
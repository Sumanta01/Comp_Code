#include<bits/stdc++.h>
using namespace std;

unordered_map<int,int>findFrequency(vector<int>&arr){
  unordered_map<int,int>frequencymap;
  for(int i:arr){
    frequencymap[i]++;
  }
  return frequencymap;

}
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<int,int>frequency=findFrequency(arr);
    for(auto i:frequency){
      cout<<i.first<<"-->"<<i.second<<endl;
    }
  return 0;
}
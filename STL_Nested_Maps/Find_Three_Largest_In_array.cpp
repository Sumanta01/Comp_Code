#include<bits/stdc++.h>
using namespace std;
vector<int>findThreeLargest(vector<int>&arr){
    int first_larg=INT_MIN;
    int second_larg=INT_MIN;
    int third_larg=INT_MIN;
    
    for(int num:arr){
        if(num>first_larg){
            third_larg=second_larg;
            second_larg=first_larg;
            first_larg=num;
        }
        else if(num>second_larg){
            third_larg=second_larg;
            second_larg=num;
        }
        else if(num>third_larg){
            third_larg=num;
        }
    }
    return {third_larg,second_larg,first_larg};
}

int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>result=findThreeLargest(arr);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
  return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
   int min=*min_element(v.begin(),v.end());
   cout<<min<<endl;
   int max=*max_element(v.begin(),v.end());
   cout<<max<<endl;
   int sum=accumulate(v.begin(),v.end(),0);
   cout<<sum<<endl;
   long long product=accumulate(v.begin(),v.end(),1,multiplies<int>());
   cout<<product<<endl;
   int ct=count(v.begin(),v.end(),22);
   cout<<ct<<endl;
   auto it =find(v.begin(),v.end(),63);
   if(it!= v.end()){
         cout<<*it<<endl;
    }
    else{
         cout<<"Not Found"<<endl;
   }
    reverse(v.begin(),v.end());
    for (auto  val:v){
        cout<<val<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end());
    for (auto  val:v){
        cout<<val<<" ";
    }
    cout<<endl;
    string str="kiit gives me more knowledge";
    reverse(str.begin(),str.end());
    cout<<str<<endl;






  return 0;
}
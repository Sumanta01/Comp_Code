/*Given N string and Q queries in each query given a string and print yes if string is present else print No 
CONSTRAINTS
n<=1e6
|s|<=100
Q<=1e6*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<string>s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        s.insert(str);
    }
    int q;
    cin>>q;
    while(q--){
    string str;
    cin>>str;
    if(s.find(str)==s.end()){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }
    }
  return 0;
}
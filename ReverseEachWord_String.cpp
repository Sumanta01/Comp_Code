#include<bits/stdc++.h>
using namespace std;
 void reverse(string s){
    vector<string>v;
    string str="";
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            v.push_back(str);
            str="";
        }
        else{
            str+=s[i];
        }
    }
        v.push_back(str);
    
   
    for(int i=v.size()-1;i>=0;i--)
        cout<<v[i]<<" ";

 }

int main()
{
    string str;
    getline(cin,str);
    reverse(str);
  return 0;
}

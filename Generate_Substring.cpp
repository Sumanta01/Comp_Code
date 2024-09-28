#include<bits/stdc++.h>
using namespace std;
vector<string>generateSubstr(string str){
    vector<string>ans;
    for(int i=0;i<str.size();i++){
        for(int j=i+1;j<=str.size();j++){
            string sub=str.substr(i,j-i);
            ans.push_back(sub);

        }
    }
    return ans;
}
int main()
{
    string str;
    getline(cin,str);
    vector<string>res=generateSubstr(str);
    for(string s:res){
        cout<<s<<endl;
    }
  return 0;
}
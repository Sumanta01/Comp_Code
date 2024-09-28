#include<bits/stdc++.h>
using namespace std;
void solve(string str,int ind, string output,vector<string>&ans){
    //base case
    if(ind>= str.size()){
        if (output.length()>0){
            ans.push_back(output);
        }
        return;
    }
    //recursive case
    solve(str,ind+1,output,ans);
    char elm=str[ind];
    output+=elm;
    solve(str,ind+1,output,ans);
    output.pop_back();
}
 
vector<string>subsequence(string str){
    vector<string>ans;
    string output="";
    int ind=0;
    solve(str,ind,output,ans);
    return ans;

}
int main()
{
    string str;
    cin>>str;
    vector<string>ans=subsequence(str);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

  return 0;
}
#include<bits/stdc++.h>
using namespace std;

void solve(string digit,int ind,string output, vector<string>&ans,string mapping[]){
    if(ind==digit.size()){
        ans.push_back(output);
        return;
    }
    int num=digit[ind]-'0';
    string val=mapping[num];
    for(int i=0;i<val.size();i++){
        output.push_back(val[i]);
        solve(digit,ind+1,output,ans,mapping);
        output.pop_back();

    }

}

vector<string>letterCombination(string digit){
    vector<string >ans;
    if(digit.size()==0){
        return ans;
    }
    string output;
    int ind=0;
    string mapping[10]={" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    solve(digit,ind ,output,ans,mapping);
    return ans;
    

}
int main()
{
    string digit;
    cin>>digit;
    vector<string>ans=letterCombination(digit);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
  return 0;
}
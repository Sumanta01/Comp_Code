#include<bits/stdc++.h>
using namespace std;

string reverseStack(string &str){
    stack<char>st;
    for(char ch:str){
        st.push(ch);
    }
    string rev;
    while(!st.empty()){
        rev+=st.top();
        st.pop();
    }
    return rev;
}
int main()
{
    string str;
    getline(cin,str);
    cout<<reverseStack(str)<<endl;
  return 0;
}
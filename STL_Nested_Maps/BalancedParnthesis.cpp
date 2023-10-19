#include<bits/stdc++.h>
using namespace std;
bool isValid(string str){
    stack<char>st;
    for(int i=0;i<str.size();i++){
        if(str[i]=='{' || str[i]=='(' || str[i]=='['){
            st.push(str[i]);
        }
        else if( str[i]=='}'){
            if(!st.empty() and st.top()=='{'){
                st.pop();
            }
            else{
                return false;
            }
        }
        else if (str[i]==']'){
            if(!st.empty() and st.top()=='['){
                st.pop();
            }
            else{
                return false;
            }
        }
        else if(str[i]==')') {
            if(!st.empty() and st.top()=='('){
                st.pop();
            }
            else{
                return false;
            }
        }
    }
    if(!st.empty()){
        return false;
    }
    return true;
}
int main()
{
    string str;
    cin>>str;
    if(isValid(str)){
        cout<<"Valid String"<<endl;
    }
    else{
        cout<<"Invalid String"<<endl;
    }
    
    


  return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{

    // string str;
    // cin>>str;
    // string str_rev;
    // for(int i=str.size()-1;i>=0;i--){
    //     str_rev.push_back(str[i]);
    // }
    // if(str_rev==str){
    //     cout<<"Palindrome";
    // }
    // else{
    //     cout<<"Not palindrome";
    // }
    string str;
    cin>>str;
    int n=str.size();
    for(int i=1;i<n/2;i++){
        if(str[i]==str[n-1-i]){
          cout<<"Palindrome";
        }
        else{
            cout<<"Not palindrome";
        }
    }
  return 0;
}
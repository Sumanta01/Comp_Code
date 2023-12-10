#include<bits/stdc++.h>
using namespace std;
int repeatCharString(string str){
    unordered_map<char,int>charCount;
    for(char ch:str){
        charCount[ch]++;
    }
    for(int i=0;i<str.length();i++){
        if(charCount[str[i]]==1){
            return i;
        }
    }
    return -1;
}

int main()
{
    string str;
    getline(cin,str);
    cout<<repeatCharString(str);
  return 0;
}
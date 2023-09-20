#include<bits/stdc++.h>
using namespace std;
int compare(string str){
    int count=0;
    for(int i=0;i<str.length();i++){
        if(str[i]<str[i+1]){
            return 1;
        }

    }
    return 0;
   
    
}
int main()
{
   string str;
    cin>>str;
    cout<<compare(str);

  return 0;
}
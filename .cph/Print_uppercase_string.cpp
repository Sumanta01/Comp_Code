#include<bits/stdc++.h>
using namespace std;
int main()
{
while(true){
    string str;
    cin>>str;
    if(str.size()==0){
        break;
    }
    for(int i=0;i<str.size();i++){
        toupper(str[i]);
    }
    cout<<str<<endl;
}

  return 0;
}
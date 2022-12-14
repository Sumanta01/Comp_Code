# include<bits/stdc++.h>
using namespace std;
int main()
{ 
    // string str;
    // cin>>str;
    // string str2;
    // cin>>str2;
    // cout<<str+str2;
    // string str1="mathematics";
    // str1[4]='S';
    // cout<<str1;


    // int t;
    // cin>>t;
    // cin.ignore();
    // //t++;
    // while(t--){
    //     string s;
    //     getline(cin,s);
    //     cout<<s<<endl;
    // }
//   string str;
//    cin>>str;
//    for(int i=str.size()-1;i>=0;i--){
//     cout<<str[i];
//    }
string str;
cin>>str;
string str_rev;
for(int i=str.size()-1;i>=0;i--){
    str_rev+=str[i];
}
cout<<str_rev;



  return 0;
}
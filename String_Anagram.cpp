#include<bits/stdc++.h>
using namespace std;
int main()
{
   string str1 ,str2;
   getline(cin,str1);
   getline(cin,str2);
   int count=0;
   if(str1.length()!=str2.length()){
         cout<<"Not Anagram";
   }
   else{
         for(int i=0;i<str1.length();i++){
            for(int j=0;j<str2.length();j++){
                if(str1[i]==str2[j]){
                    count++;
                    break;
                }
            }
        }
        if(count==str1.length()){
            cout<<"Anagram";
        }
        else{
            cout<<"Not Anagram";
        }
   }


  return 0;
}
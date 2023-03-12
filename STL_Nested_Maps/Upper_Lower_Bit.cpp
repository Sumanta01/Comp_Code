#include<bits/stdc++.h>
using namespace std;
void printBinary(int n){
    for(int i=10;i>=0;i--){
        cout<<((n>>i)&1);
    }
}
int main()
{
    // int n;
    // cin>>n;
    for(char i='A';i<='Z';i++){
        cout<<i<<" -- ";
        printBinary(i);
        cout<<endl;
    }
    cout<<endl;
    for(char i='a';i<='z';i++){
        cout<<i<<" -- ";
        printBinary(i);
        cout<<endl;
    }
    // Lowercase to Uppercase
    char b='b';
    char B= b &'_';
    cout<<B<<endl;
    // Uppercase to Lowercase
    char  C='C';
    char c= C |' ';
    cout<<c<<endl;
  return 0;
}
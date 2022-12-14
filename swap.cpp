#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the first number: "<<endl;
    cin>>a;
    cout<<"Enter the second number:"<<endl;
    cin>>b;
    a^=b^=a^=b;
    cout<<"The first number is :"<<a<<endl;
    cout<<"The second number is :"<<b<<endl;

  return 0;
}
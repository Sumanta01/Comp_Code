#include<bits/stdc++.h>
using namespace std;
void Rec_Name(int i, int n){
    if(i>n){
        return;
    }
    cout<<i<<" ";
    Rec_Name(i+1,n);
    
}

int main()
{
    int i,n;
    cin>>i>>n;
    Rec_Name(i,n);
  return 0;
}
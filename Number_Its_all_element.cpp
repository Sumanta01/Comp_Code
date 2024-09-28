#include<bits/stdc++.h>
using namespace std;
void  Number_Element(int n){
  if(n==0){
    return;
  }
  //cout<<n<<" ";
  Number_Element(n-1);
  cout<<n<<" ";

}

int main()
{
    int n;
    cin>>n;
    Number_Element(n);
    
  return 0;
}
#include<bits/stdc++.h>
using namespace std;
void primefactor(int n){
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            n/=i;
            cout<<i<<" ";
        }
    }
    if(n!=1){
        cout<<n<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    primefactor(n);
  return 0;
}
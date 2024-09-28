#include<bits/stdc++.h>
using namespace std;
int fibo(int n){
    int prev1=0;
    int prev2=1;
    for(int i=2;i<=n;i++){
        int cur=prev1+prev2;
        prev1=prev2;
        prev2=cur;
    }
    return prev2;
}
int main()
{
    int n;
    cin>>n;
    cout<<fibo(n)<<endl;
  return 0;
}
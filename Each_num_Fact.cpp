/* Given a T test case and in each test case a number N point its factorial for each test case% M
Constraints
1<=N<=1e5;
1<=M<=1e5;
*/
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+7;
const int M=1e5+10;
long long fact[N];
int main(){
    fact[0]=fact[1]= 1;
    for(int i=2;i<N;i++){
        fact[i]=fact[i-1]*i;
    }

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<fact[n]<<endl;
    }

    
  return 0;
}
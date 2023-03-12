#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>prime_fact;
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            prime_fact.push_back(i);
            n/=i;
        }
    }
    if(n>1){
        prime_fact.push_back(n);
    }
    for(int prime:prime_fact){
        cout<<prime<<" ";
    }
  return 0;
}
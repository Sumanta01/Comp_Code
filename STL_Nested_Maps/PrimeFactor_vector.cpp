#include<bits/stdc++.h>
using namespace std;
vector<int>prime_Factor(int n){
    vector<int>fact;
    while(n%2==0){
        fact.push_back(2);
        n/=2;
    }
    int i=3;
    while(i*i<=n){
        while(n%i==0){
            fact.push_back(i);
            n/=i;
        }
        i+=2;
    }
    if(n>2){
        fact.push_back(n);
    }
    return fact;
    
}
int main()
{
    int n;
    cin>>n;
    vector<int>fact=prime_Factor(n);
    for(int res:fact){
        cout<<res<<" ";
    }
    cout<<endl;
  return 0;
}
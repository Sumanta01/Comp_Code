#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0,count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
            count++;
            sum+=i;
        }
        //cout<<count<<endl;
    }
    cout<<"\n"<<count<<endl;
    cout<<sum<<endl;

  return 0;
}
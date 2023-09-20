#include<bits/stdc++.h>
using namespace std;

int  minElement(int n){
    int minElm=n%10;
    while(n>=10){
        n/=10;
        if(n%10 < minElm){
            minElm=n%10;
        }
    }
    return minElm;
}
int main()
{
    int n;
    cin>>n;
    int lst[n];
    for(int i=0;i<n;i++){
        cin>>lst[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=minElement(lst[i]);
    }
    cout<<sum<<endl;

  return 0;
}
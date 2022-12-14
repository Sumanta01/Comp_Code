#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;
long long int arr[N];
int main()
{
    int n,m;
    cin>>n>>m;
    while(m--){
        int a,b,c;
        cin>>a>>b>>c;
        for(int i=a;i<=b;i++){
            arr[i]+=c;

        }
    }
    long long max=-1;
    for(int i=1;i<=n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<max<<endl;



  return 0;
}
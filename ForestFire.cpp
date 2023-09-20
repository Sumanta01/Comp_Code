#include<bits/stdc++.h>
using namespace std;
//const int N=1e5+5;
int main()
{
    int N,n,count=0;	
    cin>>N>>n;
    int arr[N];
    for( int i=0;i<N;i++){
        cin>>arr[i];
    }
    for( int i=0;i<N;i++){
        if(arr[i]>=n){
            count++;
        }
    }
    if(count>0){
        cout<< count<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
    
}
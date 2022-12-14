                                  
       
//Constraints                                         
//1<=q<=1e5         
//1<=N<=1e5+10                                 Another n^2 time complexity code
//1<=arr[i]<=1e9                                int n;
//1<=l,r<=N                                     cin>>n;
                                                 /*for(int i=0;i<=n;i++)  
                                                   cin>>arr[i] 
                                                   int q;
                                                   cin>>q;
                                                   while(q--)  
                                                   int l,r;
                                                   cin>>l>>r;
                                                   long long sum=0
                                                   for(int i=l;i<=r;i++)  
                                                   sum+=arr[i];
                                                   cout<<sum<<endl;    */                 


#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
int arr[N];
int pf[N];                               
int main()                                      
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        pf[i]=pf[i-1]+arr[i];
    }
    int q;
    cin>>q;
    while(q--){
       int l,r;
       cin>>l>>r;
       cout<<pf[r]-pf[l-1]<<endl;
    
       }
       

  return 0;
}
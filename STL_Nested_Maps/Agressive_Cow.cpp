#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int n,cows;
int position[N];
bool canPlaceCow(int midDist){
    int  last_pos_cows=-1;
        int cows_ct=cows;
     for(int i=0;i<n;i++){
        if(position[i]-last_pos_cows>=midDist || last_pos_cows==-1){
            cows_ct--;
            last_pos_cows=position[i];
        }
        if(cows_ct==0) break;
     }
     return cows_ct==0;
}
int main()
{
   int t;
   cin>>t;
   while(t--){
    cin>>n>>cows;
    for(int i=0;i<n;i++){
        cin>>position[i];
    }
    sort(position,position+n);
    //TTTTTTTTFFFFFFF
    int lo=0, hi=1e9 ,mid;
    while(hi-lo>1) {
       int  mid=(lo+hi)/2;
        if(canPlaceCow(mid)){
            lo=mid;
        }
        else{
            hi=mid-1;
        }
        
    }
    if(canPlaceCow(hi)){
        cout<<hi<<endl;
    }
    else{
        cout<<lo<<endl;
    }

   }

  return 0;
}
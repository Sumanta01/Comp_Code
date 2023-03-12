#include<bits/stdc++.h>
using namespace std;
int lower_bound(vector<int>&v,int element){
    int beg=0,end=v.size()-1;
    int mid;
    while(end-beg>1){
        mid=(beg+end)/2;
        if(v[mid]<element){
            beg=mid+1;
        }
        else{
            end=mid;
        }
    }
    if(v[beg]>=element){
        return beg;
    }
    else if(v[end]>=element){
        return end;
    }
    else{
        return -1;
    }
}
int uper_bound(vector<int>&v,int element){
    int beg=0,end=v.size()-1;
    int mid;
    while(end-beg>1){
        mid=(beg+end)/2;
        if(v[mid]<=element){
            beg=mid+1;
        }
        else{
            end=mid;
        }
    }
    if(v[beg]>element){
        return beg;
    }
    else if(v[end]>element){
        return end;
    }
    else{
        return -1;
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int >v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int element;  
    cin>>element;
    int lb=lower_bound(v,element);
    cout<<lb<<" "<<v[lb]<<endl;
    int ub=uper_bound(v,element);
    cout<<ub<<" "<<v[ub]<<endl;
  return 0;
}
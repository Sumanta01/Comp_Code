#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int >v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int key;
    cin>>key;
    int beg=0,end=n-1;
    int mid;
    while(end-beg>1){
        mid=(beg+end)/2;
        if(v[mid]<key){
            beg=mid+1;
        }
        else{
            end=mid;
        }
    }
    if(v[end]==key){
        cout<<end<<endl;
    }
    else if(v[beg]==key){
        cout<<beg<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
    

    return 0;
}
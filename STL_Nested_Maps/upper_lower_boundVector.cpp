#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    auto it=upper_bound(v.begin(),v.end(),12);
    if(it==v.end()){
        cout<<"Not found"<<endl;
    }
    else{
        cout<<*it<<endl;
    }
   auto it2=lower_bound(v.begin(),v.end(),1);
   if(it2==v.end()){
         cout<<"Not found"<<endl;
    }
    else{
         cout<<*it2<<endl;
   }

  return 0;
}
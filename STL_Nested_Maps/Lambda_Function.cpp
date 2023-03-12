#include<bits/stdc++.h>
using namespace std;
bool is_positive(int c){
    return c>0;
}
int main()
{
    // cout<<[](int x,int y){return x+y;}(66,44)<<endl;
    // auto sum=[](int x,int y){return x+y;};
    // cout<<sum(32,44)<<endl;
  vector<int>v={-34,23,-56};
  cout<<all_of(v.begin(),v.end(),[](int x){ return x>0;});
    cout<<endl;
  cout<<all_of(v.begin(),v.end(),is_positive);
    cout<<endl;
  cout<<any_of(v.begin(),v.end(),[](int x){return x>0;});
    cout<<endl;
  cout<<any_of(v.begin(),v.end(),is_positive);
    cout<<endl;
  cout<<none_of(v.begin(),v.end(),[](int x){return x>0;});
    cout<<endl;
  cout<<none_of(v.begin(),v.end(),is_positive);
    cout<<endl;
  cout<<all_of(v.begin(),v.end(),[](int x){return x%2==0;});
    cout<<endl;




  return 0;
}
/*Given N input String ,print unique strings in lexiographically order with their frequency
N<=1e5
|S|<=100 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string ,int>m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        m[s]++;
    }
    for(auto f:m){
        cout<<f.first<<"-"<<f.second<<endl;
    }

  return 0;
}
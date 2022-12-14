#include<bits/stdc++.h>
using namespace std;
int main()
{
map<int ,string>m;
m[1]="hjk";
m[5]="abc";
m[3]="vbn";
m[7]="ert";
m.insert({9,"ups"});
map<int,string>::iterator it;
for(it=m.begin();it!=m.end();it++){
   // cout<<(*it).first<<" "<<(*it).second<<endl;
   cout<<it->first<<" "<<it->second<<endl;
 
}

}



 
#include<bits/stdc++.h>
using namespace std;
void print(multiset<string> &s){
    for(string value:s){
        cout<<value<<endl;
    }
}
int main()
{
    multiset<string>s;
    s.insert("HYIU");
    s.insert("VVG");
    s.insert("UYT");
    s.insert("FGH");
    s.insert("HYIU");
    s.insert("YTR");
    s.insert("VVG");
    auto it=s.find("VVG");
    if(it!=s.end()){
        s.erase(it);
    }
    //s.erase("HYIU");
    
    print(s);
    // if(it!=s.end()){
    //     cout<<"True"<<endl;
    // }
    // else{
    //     cout<<"False"<<endl;
    // }

  return 0;
}
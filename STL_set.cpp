#include<bits/stdc++.h>
using namespace std;
void print(set<string>&s){
    for(string value:s){
        cout<<value<<endl;
    }
}
int main()
{
    set<string>s;
    s.insert("ABC");
    s.insert("PQR");
    s.insert("MNO");
    s.insert("XYZ");
    s.insert("JKL");
    auto it=s.find("XYZ");
    if(it!=s.end()){
        s.erase(it);

    }

   
    print(s);
  return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<string>q;
    q.push("auy");
    q.push("gtd");
    q.push("tfr");
    q.push("swe");
    q.push("uyt");
    while(!q.empty()){
        cout<<q.front()<<endl;
        //break;
        q.pop();
    }
  return 0;
}
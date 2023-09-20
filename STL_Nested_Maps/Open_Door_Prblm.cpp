#include<bits/stdc++.h>
using namespace std;
int  openDoor(int N){
    int door=sqrt(N);
    return door;
}
int main()
{
    int n;
    cin>>n;
    cout<<openDoor(n)<<endl;
  return 0;
}
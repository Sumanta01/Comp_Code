#include<bits/stdc++.h>
using namespace std;
void random(int n){
    srand(time(0));
    for(int i=0;i<n;i++){
        cout<<rand()%100<<endl;
    }
}
void Random(int a){
     for(int i=0;i<100;i++){
        a=rand()%100;
        cout<<a<<endl;
     }
}
int main()
{
 int a;
// random(a);
   Random(a);

  return 0;
}
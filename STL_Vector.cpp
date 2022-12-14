#include<bits/stdc++.h>
using namespace std;
void print_vector(vector<int >&v){
    cout<<"Size: "<<v.size()<<endl;
    for (int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main()
{
vector<int >v;
 int n;
 cin>>n;
 for(int i=0;i<n;i++){
    int c;
    cin>>c;
   // print_vector(v);
    v.push_back(c);
 }
 print_vector(v);
 vector<int >&v2=v;
 v2.push_back(55);
 print_vector(v2);


  return 0;
}
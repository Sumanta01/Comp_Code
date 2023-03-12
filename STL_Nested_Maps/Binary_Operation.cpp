#include<bits/stdc++.h>
using namespace std;
void print_Binary(int n){
    for(int i=10;i>=0;i--){
        cout<<((n>>i)&1);
    }
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        print_Binary(i);
        if(i&1!=0){
            cout<<"Odd"<<endl;
        }
        else{
            cout<<"Even"<<endl;
        }
    }

    return 0;
}
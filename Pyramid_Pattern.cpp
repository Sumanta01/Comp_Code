#include<bits/stdc++.h>
using namespace std;
void pattern(int n){
    int flag=1;
    int temp=n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=temp;j++){
            cout<<" ";
        }
        for(int k=1;k<=flag;k++){
            cout<<"*" ;
            if(k<flag){
                cout<<" ";
            }

        }
        cout<<endl;
        temp--;
        flag++;
        
    }
}

int main()
{
    int n;
    cin>>n;
    pattern(n);

  return 0;
}

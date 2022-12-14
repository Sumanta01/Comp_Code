#include<bits/stdc++.h>
using namespace std;
int Factorization(int n){
    if(n==0){
        return 1;
    }
    else{
        return n* Factorization(n-1);
    }

}
int main(){
int n;
cout<<"Enter the  number: "<<endl;
cin>>n;
cout<<Factorization(n);
return 0;
}
#include<bits/stdc++.h>
using namespace std;
int BinaryExponential(int a ,int b){

    if(b==0){
        return 1;
    }
    long res=BinaryExponential(a,b/2);
    if(b&1){
        return a* res * res;
    }
    else{
        return res*res;
    }

}
int BinaryExpIter(int a ,int b){
    long ans=1;
    while(b){
        if(b&1){
            ans=ans*a;
        }
        a=a*a;
        b>>=1;
    }
    return ans;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<BinaryExponential(a,b)<<endl;//Recursive Method
    cout<<BinaryExpIter(a,b)<<endl;//Terative Method
    //cout<<pow(a,b)<<endl; //Inbuilt power function
  return 0;
}
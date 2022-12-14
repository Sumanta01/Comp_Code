#include<bits/stdc++.h>
using namespace std;
void swap(int &a,int &b){
   int temp=a;
    a=b;
    b=temp;
    
}
// void Print(string &s){
//     s="";
// }
// void Explain(int arr[]){
//     arr[0]=9;
// }
int main()
{
    int a,b;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    cout<<max(a,b)<<endl;//Inbuilt functions of max 
    cout<<min(a,b)<<endl;//Inbuilt functions of min
//    string s="abcdef";
//    cout<<s;
//    cout<<" ";
//    Print(s);
//    cout<<s;
//   int arr[10];
//     arr[0]=8;
//   cout<<arr[0]<<endl;
//   Explain(arr);
//   cout<<arr[0]<<endl;
    return 0;
}
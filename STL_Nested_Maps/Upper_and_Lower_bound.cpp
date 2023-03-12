#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
sort(arr,arr+n);
for(int i=0;i<n;i++){
  cout<<arr[i]<<" ";
}
cout<<endl;
int *ptr=lower_bound(arr,arr+n,6);
if(ptr==arr+n){
    cout<<"Not found"<<endl;
}
else{
    cout<<*ptr<<endl;
}
int *ptr2=upper_bound(arr,arr+n,16);
if(ptr2==arr+n){
    cout<<"Not found"<<endl;
}
else{
    cout<<*ptr2<<endl;
}
  return 0;
}
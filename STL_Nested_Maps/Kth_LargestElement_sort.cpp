#include<bits/stdc++.h>
using namespace std;
void findKthLargestElement(vector<int>&num){
    sort(num.begin(),num.end());
}
int main()
{
    int n;
    cin>>n;
    vector<int>num(n);
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    int k;
    cin>>k;
    findKthLargestElement(num);
    
    for(int i=k+1;i<n;i++){
        cout<<num[i]<<" ";

    }
    
    
  return 0;
}
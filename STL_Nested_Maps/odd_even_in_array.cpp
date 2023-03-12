#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int even_count=0,odd_count=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            even_count++;
        }
        else{
            odd_count++;
        }
    }
    cout<<"The even number in the array is "<<even_count<<endl;
    cout<<"The odd number in the array is "<<odd_count<<endl;
  return 0;
}
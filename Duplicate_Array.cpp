#include<bits/stdc++.h>
using namespace std;
void findDuplicate(int arr[],int n){
    unordered_set<int>elm;
    unordered_set<int>dup;
    for(int i=0;i<n;i++){
        if(elm.count(arr[i])>0){
            dup.insert(arr[i]);
        }
        else{
            elm.insert(arr[i]);
        }
    }
    cout<<"Duplicates elemnts are : ";
    for(int i:dup){
        cout<<i<<" ";
    }
    cout<<endl;

   cout << "After removing duplicate elements: ";
    for (int i : elm) {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{

    int arr[]={1,2,3,4,5,6,7,8,9,1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    findDuplicate(arr,n);

  return 0;
}
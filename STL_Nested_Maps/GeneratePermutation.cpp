#include<bits/stdc++.h>
using namespace std;
void generatePermutation(int arr[],int n,int beg ,int end){
    
    if(beg==end){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
            
            
        }
        
        cout<<endl;
    }
    else{
        for(int i=beg;i<=end;i++){
            swap(arr[beg],arr[i]);
            generatePermutation(arr,n,beg+1,end);
            swap(arr[beg],arr[i]);
           
        }
    }
   
}
void generatePermutation(int arr[],int n){
   
    generatePermutation(arr,n,0,n-1);
    

}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=i+1;
    }
   generatePermutation(arr,n);
    
    
    return 0;
}


    

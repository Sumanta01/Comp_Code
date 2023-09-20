#include<bits/stdc++.h>
using namespace std;
vector<int> find_k_Largest(vector<int>&v,int k){
    priority_queue<int,vector<int>,greater<int>> min_heap;
    for(int n:v){
        if(min_heap.size()<k){
            min_heap.push(n);
        }
        else{
            if(n>min_heap.top()){
                min_heap.pop();
                min_heap.push(n);
            }
        }
    }
    vector<int>k_largestElm;
    while(!min_heap.empty()){
        k_largestElm.push_back(min_heap.top());
        min_heap.pop();
    }
    return k_largestElm;
    

}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int k;
    cin>>k;
  vector<int>res= find_k_Largest(v,k);
  for(int i: res){
    cout<<i<<" ";
  }
    cout<<endl;

    
  return 0;
}
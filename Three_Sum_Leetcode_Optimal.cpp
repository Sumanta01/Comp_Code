#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>tripletSum(vector<int>num,int n){
    if(num.empty() || n<3  ){
        return {};
    }
    sort(num.begin(),num.end());
    set<vector<int>>ans;
    for(int i=0;i<n-2;i++){
        int left=i+1;
        int right=n-1;
        while(left<right){
            int sum=num[i]+num[left]+num[right];
            if(sum==0){
                vector<int>res={num[i],num[left],num[right]};
                ans.insert(res);
                left++;
                right--;
            }
            else if (sum<0){
                left++;
            }
            else{
                right--;

            }
            
        }
    }
    vector<vector<int>>fin{ans.begin(),ans.end()};
    return fin;


}
int main()
{
    int n;
    cin>>n;
    vector<int>num(n);
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    vector<vector<int>>ans=tripletSum(num,n);
    for(vector<int>&res :ans){
        for(int i:res){
            cout<<i<<" ";
        }
        cout<<endl;
    }
  return 0;
}
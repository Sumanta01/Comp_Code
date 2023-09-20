#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>tripletSum(vector<int>num,int n){
    set<vector<int>>st;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(num[i]+num[j]+num[k]==0){
                    vector<int>temp={num[i],num[j],num[k]};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);

                }
            }
        }
    }
    vector<vector<int>>ans{st.begin(),st.end()};
    return ans;

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
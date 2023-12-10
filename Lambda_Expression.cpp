#include<bits/stdc++.h>
using namespace std;

int main()
{
    auto add=[](int a ,int b) -> int {
        return a+b;
    };
    cout<<add(33,56)<<endl;

    vector<int>ans={1,2,3,5,6};
    for_each(ans.begin(),ans.end(),[](int num){ cout<<num*2<<" ";});
    cout<<endl;
    int x=10;
    auto add2=[x](int a ,int b) -> int {
        return a+b+x;
    };
    cout<<add2(33,56)<<endl;
    

    


  return 0;
}
#include<bits/stdc++.h>
using namespace std;
void findFrequency(string str){
    for(char i='a';i<'z';i++){
        int count=0;
        for(int j=0;j<str.length();j++){
            if(str[j]==i){
                count++;
            }
        }
        if(count>0){
            cout<<i<<"-->"<<count<<endl;
        }
    }

}
int main()
{
    string str;
    getline(cin,str);
    findFrequency(str);
  return 0;
}
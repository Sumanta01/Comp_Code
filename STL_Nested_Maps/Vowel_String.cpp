#include<bits/stdc++.h>
using namespace std;

bool isVowel(char c){
    return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}

void findCountVowel(string str){
    int countvowel=0;
    int countCons=0;
    for(char c:str){
        char lowchar=tolower(c);
        if(isalpha(lowchar)){
            if(isVowel(lowchar)){
               
                countvowel++;
                cout<<lowchar<<" ";
            }
            else{
                
                countCons++;
            }
        }
        
    }
    cout<<"Total Vowels are :"<<countvowel<<endl;
    cout<<"Total Consonants are :"<<countCons<<endl;
}
int main()
{
    string str;
    getline(cin,str);
    findCountVowel(str);
  return 0;
}
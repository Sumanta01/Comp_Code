#include<bits/stdc++.h>
using namespace std;

void towerhanoi(char beg,char aux,char end,int n){
    
    if(n==1){
        cout<<"Move the disk from "<<beg<<" --> "<<end<<endl;
        
    }
    else{
        towerhanoi(beg,end,aux,n-1);
        cout<<"Move the disk from "<<beg<<" --> "<<end<<endl;
        towerhanoi(aux,beg,end,n-1);
        
    }
   
}

int main()
{
    int n;
    cin>>n;
    char a,b,c;
    towerhanoi('A','B','C',n);
   
  return 0;
}
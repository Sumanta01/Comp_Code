#include<bits/stdc++.h>
using namespace std;
void randomNumber(){
    srand(time(0));
    for(int i=0;i<10;i++){
        cout<<rand()%100<<" ";
    }
    cout<<endl;
}

int main()
{
    randomNumber();
    return 0;
}
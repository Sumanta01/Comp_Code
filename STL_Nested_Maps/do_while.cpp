#include<bits/stdc++.h>
using namespace std;
int n;
int main()
{
    do{
        cout<<"Enter 1-10 to see the magic or 9 to exit "<<endl;
        cin>>n;
        switch(n){
            case 1:
            cout<<"Gaand mein ungli karna band kar madarchood...!"<<endl;
            break;
            case 2:
            cout<<"Bhosidk mumee lega kya....! "<<endl;
            break;
            case 3:
            cout<<"Chal bhosidke apne baap ko mat Sikha ...!"<<endl;
            break;
            case 4:
            cout<<"Aakhh dikhata hae madarchood .....!"<<endl;
            break;
            case 5:
            cout<<"Andhaa hae kya Laudee....!"<<endl;
            break;
            case 6:
            cout<<"Yehi pe Pataakar chod dege chal Nikal Madarchood....!"<<endl;
            break;
            case 7:
            cout<<"Tu thoda sa behen ke lauda kya bhenchod.....!"<<endl;
            break;
            case 8:
            cout<<"Kahin aur jake apni gaand marwayee he yah he se nikal...!"<<endl;
            break;
            default:
            cout<<"Madarchood 1-10 input dene ka hae tere ko...!"<<endl;
            break;
        }
    }while(n!=9);
    return 0;
    
}
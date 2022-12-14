#include<bits/stdc++.h>
using namespace std;
const int N=1e8;
const int NN=1e6;
int arr[NN];
void  func(int n){
    func(n+2);
    func(n+1);
    func(n-1);

}
int main()
{
     func(0);


  return 0;
}
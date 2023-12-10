#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int>li;
    li.push_back(1);
    li.push_back(2);
    li.push_back(3);
    li.push_front(5);
    li.push_front(6);
    li.pop_back();// renoved the 3 from list because  list is 6 5 1 2 3
    li.pop_front();// removed the 6 from list because list is 6 5 1 2 

    //sort(li.begin(), li.end());
    li.sort(); // sorting the list with ascending order
    li.reverse(); // reversing the list

    for(int i:li){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<li.size()<<endl;
    cout<<li.front()<<endl;
    cout<<li.back()<<endl;
    cout<<boolalpha<<li.empty();
    
  return 0;
}
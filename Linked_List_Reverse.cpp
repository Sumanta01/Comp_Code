#include<bits/stdc++.h>
using namespace std;
struct Node{
  int data;
  Node* next;
};
Node* head;
void Insert(int x){
  Node* temp=new Node();
  temp->data=x;
  temp->next=head;
  head=temp;
}
void Print(){
  Node* temp=head;
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  cout<<endl;
}
void Reverse(){
  Node *current,*prev,*next;
  current=head;
  prev=NULL;
  while(current!=NULL){
    next=current->next;
    current->next=prev;
    prev=current;
    current=next;
  }
  head=prev;
}
int main()
{
  head=NULL;
  int n,x;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>x;
    Insert(x);
  }
  Print();
  Reverse();
  Print();
  return 0;
}



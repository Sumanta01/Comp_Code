#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    struct Node *left;
    struct Node *right;
};
 int printNode(Node *root){
    int count=0;
    if(root==NULL){
        return 0;
       
    }
    if(!root->left && !root->right){
        return 1;
        
    }
    
    else{
     //int count=0;
        count= printNode(root->left ) + printNode(root->right);
        return count;
    }
    cout<<count;
    
}
    
Node *newNode(int val){
    Node *temp = new Node;
    temp->val = val;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
int main(){
    
    Node *root = newNode(4);
    root->left = newNode(8);
    root->right = newNode(10);
    root->left->left = newNode(7);
    root->right->left = newNode(5);
    root->right->right = newNode(1);
    root->left->left->left=newNode(3);
    
    cout<< printNode(root);
    
    
    
    return 0;
}
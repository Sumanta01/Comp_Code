#include<bits/stdc++.h>
using namespace std;
class Node{
    public: int data;
    Node *left;
    Node *right;
    Node(int inf){
        data=inf;
        left=NULL;
        right=NULL;
    }
    void preorder(Node *root){
        if(root==NULL){
            return;
        }
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }

    void inorder(Node *root){
        if(root==NULL){
            return;
        }
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
    
    void postorder(Node *root){
        if(root==NULL){
            return;
        }
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
};

int main()
{
    Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(7);
    root->left->right=new Node(6);
    root->right->left=new Node(5);
    root->right->right=new Node(4);
    cout<<"Preorder Traversal: ";
    root->preorder(root);
    cout<<endl;
    cout<<"Inorder Traversal: ";
    root->inorder(root);
    cout<<endl;
    cout<<"Postorder Traversal: ";
    root->postorder(root);
    cout<<endl;
    


  return 0;
}

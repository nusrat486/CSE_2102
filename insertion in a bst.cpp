#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left;
    Node *right;
};
Node *insert(Node *root,int value)
{
    if(root==NULL)
    {
        root=new Node;
        root->data=value;
        root->left=NULL;
        root->right=NULL;
        return root;
    }
    if(value<root->data)
        root->left=insert (root->left,value);
    else if(value>root->data)
        root->right=insert (root->right,value);
        return root;
}
void inorder(Node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}
int main()
{
    Node *root=NULL;
    root=insert(root,50);
    insert(root,30);
    insert(root,20);
    insert(root,40);
    insert(root,70);
    insert(root,60);
    insert(root,80);
    cout<<"Inorder traversal ";
    inorder(root);

}

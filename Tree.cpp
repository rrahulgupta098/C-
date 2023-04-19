#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

node *buildTree()
{
    int d;
    cin >> d;
    if (d == -1)
    {
        return NULL;
    }
    node *root = new node(d);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}
void PreOrder(node* root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
}
void PostOrder(node* root){
    if(root==NULL){
        return ;
    }
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
}

void inOrder(node* root){
    if(root==NULL){
        return ;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void invertBinaryTree(node* root){
if(root==NULL){
    return ;
}
swap(root->left,root->right);
invertBinaryTree(root->left);
invertBinaryTree(root->right);
}

int main()
{
    node *root = NULL;
    root = buildTree();
    PreOrder(root);cout<<endl;cout<<endl;
    //PostOrder(root);cout<<endl;
    //inOrder(root);
    invertBinaryTree(root);
    PreOrder(root);cout<<endl;cout<<endl;

return 0;
}
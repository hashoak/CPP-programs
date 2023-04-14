#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};

void preorderPrint(struct Node* root)
{
    if(root==NULL) return;
    cout<<root->data<<" ";
    preorderPrint(root->left);
    preorderPrint(root->right);
    return;
}

void inorderPrint(struct Node* root)
{
    if(root==NULL) return;
    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);
    return;
}

int search(int p,int inorder[],int start,int end)
{
    for(int i=start;i<=end;i++) if(inorder[i]==p) return i;
    return -1;
}

Node* buildTree(int preorder[],int inorder[],int start,int end)
{
    if(start>end) return NULL;
    static int idx=0;
    struct Node *node=new Node(preorder[idx]);
    int curr=search(preorder[idx],inorder,start,end);
    idx++;
    if(start==end) return node;
    node->left=buildTree(preorder,inorder,start,curr-1);
    node->right=buildTree(preorder,inorder,curr+1,end);
    return node;
}

int main()
{
    int n;cin>>n;
    int preorder[n],inorder[n];
    for(auto &i:preorder) cin>>i;
    for(auto &i:inorder) cin>>i;
    struct Node *root=buildTree(preorder,inorder,0,n-1);
    preorderPrint(root);
    cout<<"\n";
    inorderPrint(root);
    cout<<"\n";
    return 0;
}
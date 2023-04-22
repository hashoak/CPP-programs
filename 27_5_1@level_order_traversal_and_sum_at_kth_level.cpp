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

void printLevelOrder(Node* root)
{
    if(root==NULL) return;
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        Node *t=q.front();
        q.pop();
        if(t!=NULL)
        {
            cout<<t->data<<" ";
            if(t->left!=NULL) q.push(t->left);
            if(t->right!=NULL) q.push(t->right);
        }
        else if(!q.empty())
        {
            q.push(NULL);
        }
    }
    return;
}

int sumAtK(Node* root,int k)
{
    if(root==NULL) return -1;
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    int level=0,sum=0;
    while(!q.empty())
    {
        Node *t=q.front();
        q.pop();
        if(t!=NULL)
        {
            if(level==k) sum+=t->data;
            if(t->left!=NULL) q.push(t->left);
            if(t->right!=NULL) q.push(t->right);
        }
        else if(!q.empty())
        {
            level++;
            q.push(NULL);
        }
    }
    return sum;
}

int main()
{
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    /*
          1
        /   \
       2     3
      / \   / \
     4   5 6   7
    */
    printLevelOrder(root);
    cout<<"\n";
    cout<<sumAtK(root,2)<<"\n";
    return 0;
}
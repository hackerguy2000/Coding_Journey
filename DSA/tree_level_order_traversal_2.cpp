#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *right;
    struct Node *left;

    Node(int val)
    {
        data = val;
        right = NULL;
        left = NULL;
    }
};
void level_order_traversal(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    Node *node=root;
    queue<Node *> q;
    q.push(node);
    //cout<<node->data<<" ";
    while(q.empty()!=true)
    {
        node=q.front();
        cout<<node->data<<" ";
        q.pop();
        if(node->left!=NULL)
        {
        q.push(node->left);
        }
         if(node->right!=NULL)
        {
        q.push(node->right);
        }

    }
}

 int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    level_order_traversal(root);

    return 0;
}
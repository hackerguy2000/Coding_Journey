#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *right;
    Node *left;
    Node(int val)
    {
        data = val;
        right = NULL;
        left = NULL;
    }
};
void print_right_view(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    queue<Node *> q;
    q.push(root);

    while (q.empty() != true)
    {
        int n=q.size();
        for(int i=0;i<n;i++)
        {
        Node *node = q.front();
        q.pop();
        if(i==n-1)
        {
        cout<<node->data<<" ";
        }
        if (node->left != NULL)
        {
            q.push(node->left);
        }
        if (node->right != NULL)
        {
            q.push(node->right);
        }
        }
    }
}

int main()
{
    Node *node = new Node(1);
    node->left = new Node(2);
    node->right = new Node(3);
    node->left->left = new Node(4);
    node->left->right = new Node(5);
    node->left->left->left = new Node(6);
    node->left->left->right = new Node(7);
    print_right_view(node);

    return 0;
}
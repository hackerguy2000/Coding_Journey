#include <bits/stdc++.h>
using namespace std;
struct Node
{
    struct Node *left;
    struct Node *right;
    int data;
    Node(int value)
    {
        data=value;

        left = NULL;
        right = NULL;
    }
};
int max_height(struct Node *node)
{
    if (node == NULL)
    {
        return 0;
    }
    int l_tree = max_height(node->left);
    int r_tree = max_height(node->right);
    int ans = max(l_tree, r_tree) + 1;

    return ans;
}
void nodes_at_distance_k(struct Node *root, int k)
{
    if (k == 0)
    {
        cout<<root->data<<" ";
        return;
    }
    if(root==NULL)
    {
        return;
    }
    else{nodes_at_distance_k(root->left,k-1);
    nodes_at_distance_k(root->right,k-1);
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
    int max_ht = max_height(root);
    cout << "\nMax height of tree is " << max_ht<<endl;
    int k;
    cout << " Enter the value of k to print the nodes at k but it should be less than or equal to" << max_ht<<endl;
    cin >> k;
    nodes_at_distance_k(root, k);


    return 0;
}
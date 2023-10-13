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
void Level_order_traversal(struct Node *root,int max_ht)
{
 cout<<root->data;
for(int i=1;i<max_ht;i++)
{
    printcurrent_level(root,i);

}
}
void printcurrent_level(struct Node *root,int i)
{
   if(root==NULL)
   {
    return;
   }
   
  cout<<root->left->data;
  cout<<root->right->data;


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

    cout << " The level order traversal of the whole tree is::::" <<endl;
    cin >> k;
    Level_order_traversal(root,max_ht);

    return 0;
}
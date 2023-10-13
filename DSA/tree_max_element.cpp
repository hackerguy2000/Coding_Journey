#include <bits/stdc++.h>
using namespace std;

struct Node  
{ 
  int data; 
  struct Node *left; 
  struct Node *right; 
  Node(int val){
      data=val;
      left=right=NULL;
  }
};

int calcMAX(Node *node){
    if(node == NULL)
    {    return 0;
    }    
    int root_data = node->data;
    int l_stree_max = calcMAX(node->left);
    int r_stree_max = calcMAX(node->right);
   
    return max(root_data, max(l_stree_max, r_stree_max));
}

int main() {
	
	Node *root=new Node(20);
	root->left=new Node(70);
	root->right=new Node(90);
	root->left->left=new Node(30);
	root->right->right=new Node(70);
	
    cout << "The Max in Tree is : " << calcMAX(root);
    return 0;
}

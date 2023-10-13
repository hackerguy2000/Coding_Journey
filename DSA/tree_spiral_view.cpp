#include <iostream>
using namespace std;

// Structure to define a tree node
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Helper function to calculate the height of a binary tree
int height(Node* root) {
    if (!root)
        return 0;
    return 1 + max(height(root->left), height(root->right));
}

// Function to print nodes at a given level from left to right
void printLevelLeftToRight(Node* root, int level) {
    if (!root)
        return;
    if (level == 1)
        cout << root->data << " ";
    else if (level > 1) {
        printLevelLeftToRight(root->left, level - 1);
        printLevelLeftToRight(root->right, level - 1);
    }
}

// Function to print nodes at a given level from right to left
void printLevelRightToLeft(Node* root, int level) {
    if (!root)
        return;
    if (level == 1)
        cout << root->data << " ";
    else if (level > 1) {
        printLevelRightToLeft(root->right, level - 1);
        printLevelRightToLeft(root->left, level - 1);
    }
}

// Function to perform spiral traversal of a binary tree using recursion
void spiralTraversal(Node* root) {
    int h = height(root);
    bool leftToRight = true;

    for (int i = 1; i <= h; i++) {
        if (leftToRight)
            printLevelLeftToRight(root, i);
        else
            printLevelRightToLeft(root, i);

        leftToRight = !leftToRight;
    }
}

int main() {
    // Creating a sample binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << "Spiral Traversal: ";
    spiralTraversal(root);

    return 0;
}

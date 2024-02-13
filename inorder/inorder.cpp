#include <iostream>
using namespace std;

// Structure to represent a node in the binary tree
struct Node {
    int data;           // Data stored in the node
    struct Node* left;  // Pointer to the left child node
    struct Node* right; // Pointer to the right child node
};

// Function to create a new node with the given data
Node* newNode(int data) {
    Node* temp = new Node;  // Create a new node
    temp->data = data;      // Set the data of the node
    temp->left = temp->right = NULL; // Initialize left and right children as NULL
    return temp;            // Return the newly created node
}

// Function to print binary tree recursively in inorder
void printTreeInorder(Node* root) {
    if (root == NULL)
        return;             // Base case: if the root is NULL, return

    printTreeInorder(root->left);  // Recursively traverse left subtree
    cout << root->data << " ";     // Visit the current node
    printTreeInorder(root->right); // Recursively traverse right subtree
}

int main() {
    // Constructing the binary tree
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->left->right->left = newNode(9);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->right->right->left = newNode(15);

    // Printing the binary tree in inorder traversal
    cout << "Binary Tree (Inorder traversal):" << endl;
    printTreeInorder(root);

    return 0;
}

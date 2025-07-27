#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left;
    Node *right;
};

// Create a new node
Node* newNode(int value) {
    Node* node = new Node();
    node->data = value;
    node->left = node->right = NULL;
    return node;
}

// Insert into BST
Node* insert(Node* root, int value) {
    if (root == NULL)
        return newNode(value);
    if (value < root->data)
        root->left = insert(root->left, value);
    else if (value > root->data)
        root->right = insert(root->right, value);
    return root;
}

// Search function (returns true if found)
bool search(Node* root, int key) {
    if (root == NULL)
        return false;
    if (root->data == key)
        return true;
    else if (key < root->data)
        return search(root->left, key);
    else
        return search(root->right, key);
}

// Main function
int main() {
    Node* root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    int key;
    cout << "Enter value to search: ";
    cin >> key;

    if (search(root, key))
        cout << key << " is found in the tree." << endl;
    else
        cout << key << " is NOT found in the tree." << endl;

    return 0;
}



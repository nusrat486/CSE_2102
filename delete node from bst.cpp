#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* newNode(int value) {
    Node* node = new Node();
    node->data = value;
    node->left = node->right = NULL;
    return node;
}
Node* insert(Node* root, int value) {
    if (root == NULL)
        return newNode(value);
    if (value < root->data)
        root->left = insert(root->left, value);
    else if (value > root->data)
        root->right = insert(root->right, value);
    return root;
}
Node* findMin(Node* node) {
    while (node->left != NULL)
        node = node->left;
    return node;
}
Node* deleteNode(Node* root, int key) {
    if (root == NULL)
        return root;

    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else {
        if (root->left == NULL && root->right == NULL) {
            delete root;
            return NULL;
        }
        else if (root->left == NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        Node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

void inorder(Node* root) {
    if (root != NULL) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

int main() {
    Node* root = NULL;
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 60);
    root = insert(root, 80);

    cout << "Inorder before deletion: ";
    inorder(root);
    cout << endl;

    int key;
    cout << "Enter value to delete: ";
    cin >> key;

    root = deleteNode(root, key);

    cout << "Inorder after deletion: ";
    inorder(root);
    cout << endl;

    return 0;
}


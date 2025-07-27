#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;
};

void insertAtBeginning(Node* &head, int value)  // Pass by reference
{
    Node *nn = new Node();
    nn->data = value;
    nn->next = head;
    head = nn;
}

void printlist(Node *head)
{
    Node *temp = head;
    while(temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    Node *head = NULL;
    insertAtBeginning(head, 20);
    insertAtBeginning(head, 30);
    insertAtBeginning(head, 7);
    printlist(head);
    return 0;
}

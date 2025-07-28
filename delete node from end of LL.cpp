#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = new Node{10, nullptr};
    head->next = new Node{20, nullptr};
    head->next->next = new Node{30, nullptr};

    Node* temp = head;
    cout << "Original list: ";
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    if (head == nullptr) {
        cout << "List is empty!" << endl;
    }
    else if (head->next == nullptr) {
        cout << "Deleted: " << head->data << endl;
        delete head;
        head = nullptr;
    }
    else {
        Node* temp = head;
        while (temp->next->next != nullptr) {
            temp = temp->next;
        }
        cout << "Deleted: " << temp->next->data << endl;
        delete temp->next;
        temp->next = nullptr;
    }

    temp = head;
    cout << "After deletion: ";
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}


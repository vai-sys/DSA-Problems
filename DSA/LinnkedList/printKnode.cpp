#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node() {
        next = nullptr;
    }

    node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

int getlength(node* head) {
    int len = 0;
    node* temp = head;
    while (temp != nullptr) {
        len++;
        temp = temp->next;
    }
    return len;
}

void Knode(node* head, int k) {
    int length = getlength(head);
    int pos = length - k;

    // Check if k is within the valid range
    if (pos < 0 || pos >= length) {
        cout << "Invalid value of k." << endl;
        return;
    }

    node* printNode = head;
    for (int i = 0; i < pos; i++) {
        printNode = printNode->next;
    }

    cout << "The " << k << "-th node from the end is: " << printNode->data << endl;
}

int main() {
    // Create a sample linked list
    node* head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    head->next->next->next = new node(4);
    head->next->next->next->next = new node(5);

    cout << "Linked List: ";
    node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    int k = 2;
    Knode(head, k);

    return 0;
}


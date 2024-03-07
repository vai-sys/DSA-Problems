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

node* KnodeRecursive(node* head, int k, int& count) {
    if (head == nullptr) {
        return nullptr;
    }

    node* resultNode = KnodeRecursive(head->next, k, count);

    count++;

    if (count == k) {
        return head;
    }

    return resultNode;
}

void printKthNodeFromEnd(node* head, int k) {
    int count = 0;
    node* resultNode = KnodeRecursive(head, k, count);

    if (resultNode != nullptr) {
        cout << "The " << k << "-th node from the end is: " << resultNode->data << endl;
    } else {
        cout << "Invalid value of k." << endl;
    }
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

    int k = 4;
    printKthNodeFromEnd(head, k);

    return 0;
}


#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node() {
        this->data = 0;
        this->next = NULL;
    }

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

Node* reverse(Node* & head) {
    Node* prev = NULL;
    Node* curr = head;
    while (curr != NULL) {
        Node* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    return prev;
}

Node* addOne(Node* head) {
    head = reverse(head);
    int carry = 1;
    Node* temp = head;
    Node* prev = NULL;
    while (temp != NULL) {
        int totalSum = temp->data + carry;
        int digit = totalSum % 10;
        carry = totalSum / 10;
        temp->data = digit;
        prev = temp;
        temp = temp->next;
    }

    while (carry != 0) {
        Node* newnode = new Node(carry % 10);
        prev->next = newnode;
        prev = newnode;
        carry /= 10;
    }

    head = reverse(head);
    return head;
}

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data;
        node = node->next;
    }
    cout << "\n";
}

int main() {
    // Example usage
    Node* head = new Node(9);
    head->next = new Node(9);
    head->next->next = new Node(9);

    cout << "Original List: ";
    printList(head);

    Node* result = addOne(head);

    cout << "List after adding one: ";
    printList(result);

    return 0;
}

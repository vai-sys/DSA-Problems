#include<iostream>
using namespace std;

// Define a node structure
struct Node {
    int data;
    Node* next;
};

// Function to print the linked list
void printLL(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int length(Node* head){
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
     count++;
     temp=temp->next;
    }
    return count;
}

int main() {
    // Create nodes and initialize data
    Node* first = new Node{10};
    Node* second = new Node{20};
    Node* third = new Node{30};

    // Connect nodes to form a linked list
    first->next = second;
    second->next = third;

    // Set head of the linked list
    Node* head = first;

    // Print the linked list
    printLL(head);
    cout<<"Length of Linklist is\t"<<length(head);

    // Deallocate memory (optional)
    delete first;
    delete second;
    delete third;

    return 0;
}

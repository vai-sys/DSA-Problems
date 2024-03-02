#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int val = 0) : data(val), next(nullptr) {}

};

Node* reverse(Node* &head){
    Node* prev=nullptr; 
    Node* curr=head;
    Node* nextNode=nullptr;
    while(curr!=nullptr){
        nextNode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextNode;
    }
    head=prev;
    return head;
}

Node* AddOne(Node* &head){
    // reverse the list
    head=reverse(head);
    // add one
    int carry=1;
    Node* temp=head;
    Node* prev=nullptr;
    while(temp!=nullptr){
     int totalsum=temp->data+ carry;
     int digit=totalsum%10;
     carry=totalsum/10;
     temp->data=digit;
     prev=temp;
     temp=temp->next;
     if(carry==0)break;

    }
    if(carry!=0){
    Node*nextNode=new Node(carry%10);
    prev->next=nextNode;
    prev=nextNode;
    carry=carry/10;
    }
    
    head=reverse(head);
    return head;
}
void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    
}

int main() {
    Node* head = new Node(9);
    head->next = new Node(9);
    head->next->next = new Node(9);


    cout << "Original list: ";
    printList(head);

    head=AddOne(head); 

    cout << "\nAfter Adding one: ";
    printList(head);

    Node* current = head;
    while (current != nullptr) {
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }

    return 0;
}

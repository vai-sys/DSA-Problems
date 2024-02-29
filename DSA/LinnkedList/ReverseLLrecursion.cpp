#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(){
        this->data=0;
        this->next=NULL;
        }
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};

node* reverseHelper(node* prev,node* curr){
    if(curr==NULL){
        return prev;
    }
    node* nextnode=curr->next;
    curr->next=prev;
    prev=curr;
    curr=nextnode;
    node* ans=reverseHelper(prev,curr);
    return ans;


}
node*  ReverseLL(node* head){
    node* prev=NULL;
    node* curr=head;
   
    return reverseHelper(prev,curr);
}



int main() {
    // Creating a linked list with values 1, 2, 3, 4, 5
    node* head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    head->next->next->next = new node(4);
    head->next->next->next->next = new node(5);

    // Printing the original linked list
    cout << "Original Linked List: ";
    node* current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;

    // Reversing the linked list
    node* newHead = ReverseLL(head);

    // Printing the reversed linked list
    cout << "Reversed Linked List: ";
    current = newHead;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;

    return 0;
}



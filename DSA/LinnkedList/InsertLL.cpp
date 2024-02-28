#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node* next;

  Node() : next(nullptr) {}

  Node(int data) : data(data), next(nullptr) {}
};

void insertAtHead(Node* &head, int data) {
  if (head == nullptr) {
    Node* newnode = new Node(data);
    head = newnode;
  } else {
    Node* newnode = new Node(data);
    newnode->next = head;
    head = newnode;
  }
}

void insertAtEnd(Node* &tail, int data) {
  if (tail == nullptr) {
    Node* newnode = new Node(data);
    tail = newnode;
  } else {
    Node* newnode = new Node(data);
    tail->next = newnode;
    tail = newnode;
  }
}


void printLL(Node* &head, Node* &tail) {
  Node* currNode = head;
  while (currNode != nullptr) {
    cout << currNode->data << "->";
    currNode = currNode->next;
  }
  cout << "NULL" << endl;
}

int main() {
  Node* head = nullptr;
  Node* tail = nullptr;

  insertAtHead(head, 20);
  insertAtHead(head, 30);
  insertAtHead(head, 40);
  insertAtHead(head, 50);
  insertAtHead(head, 60);
  insertAtEnd(tail, 90);
  insertAtEnd(tail, 80);

  printLL(head, tail);

  return 0;
}

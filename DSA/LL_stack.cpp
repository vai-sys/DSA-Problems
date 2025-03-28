#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class Stack {
public:
    int maxSize;
    int currentSize;
    Node* top;

    Stack(int size) {
        this->maxSize = size;
        this->currentSize = 0;
        this->top = NULL;
    }

    bool isEmpty() {
        return top == NULL;
    }

    bool isFull() {
        return currentSize == maxSize;
    }

    void push(int val) {
        if (isFull()) {
            cout << "Stack Overflow! Cannot push " << val << endl;
            return;
        }
        Node* newNode = new Node(val);
        newNode->next = top;
        top = newNode;
        currentSize++;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow! Cannot pop an element." << endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
        currentSize--;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return top->data;
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return;
        }
        Node* temp = top;
        cout << "Stack elements: ";
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Stack s(4);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    s.push(5); 

    s.display();

    s.pop();
    s.pop();
    s.display();

    cout << "Top element: " << s.peek() << endl;
    cout << "Is stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}

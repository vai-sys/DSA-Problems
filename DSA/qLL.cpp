#include <iostream>
using namespace std;

class Node {
    // 933
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class Q {
private:
    Node* front;
    Node* rear;

public:
    Q() {
        front = NULL;
        rear = NULL;
    }

    bool isEmpty() {
        return front == NULL;
    }

    void enqueue(int data) {
        Node* newNode = new Node(data);
        if (isEmpty()) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        cout << data << " enqueued" << endl;
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is Empty!" << endl;
            return -1;
        }
        int data = front->data;
        Node* temp = front;
        front = front->next;

        if (front == NULL) { 
            rear = NULL;
        }

        delete temp; 
        cout << data << " dequeued" << endl;
        return data;
    }

    void printQ() {
        if (isEmpty()) {
            cout << "Queue is Empty!" << endl;
            return;
        }

        Node* temp = front;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    Q q;
    q.enqueue(50);
    q.enqueue(60);
    q.enqueue(70);
    q.printQ(); 

    q.dequeue();
    q.printQ(); 

    return 0;
}

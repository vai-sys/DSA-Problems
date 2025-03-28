#include <iostream>
using namespace std;

class Queue {
public:
    int* arr;  
    int front;
    int rear;
    int size;

    Queue(int size) {
        arr = new int[size];  
        this->front = -1;
        this->rear = -1;
        this->size = size;
    }

    bool isEmpty() {
        return (front == -1 && rear == -1);
    }

    bool overflow() {
        return (rear == size - 1); 
    }

    void enqueue(int data) {
        if (overflow()) {
            cout << "Queue is Full" << endl;
            return;
        }

        if (isEmpty()) {
            front = 0;
        }

        arr[++rear] = data; 
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is Empty" << endl;
            return;
        }
          cout<<"element dequed is\t"<<arr[front]<<endl;
        if (front == rear) {  
            front = -1;
            rear = -1;
        } else {
            front++;  
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is Empty" << endl;
            return;
        }

        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    ~Queue() {
        delete[] arr; 
    }
};

int main() {
    Queue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.display();  

    q.dequeue();
    q.display(); 

    return 0;
}

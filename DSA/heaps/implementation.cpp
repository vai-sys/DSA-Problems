#include<iostream>
using namespace std;

class heap {
public:
    int *arr;
    int size;
    int capacity;

    heap(int capacity) {
        this->arr = new int[capacity];
        this->size = 0;
        this->capacity = capacity;
    }

    void insert(int val) {
        if (size == capacity) {
            cout << "Overflow, cannot insert values" << endl;
        }

        size++;
        int index = size;
        arr[index] = val;
        while (index > 1) {
            int parentIndex = index / 2;
            if (arr[index] > arr[parentIndex]) {
                swap(arr[index], arr[parentIndex]);
            }
            else {
                break;
            }
        }
    }

    void print() {
        for (int i = 1; i <= size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    heap h(20);
    h.insert(10);
    h.insert(20);
    h.insert(5);
    h.insert(11);
    h.insert(6);
    cout << "Printing the heap data: ";
    h.print();
    return 0;
}

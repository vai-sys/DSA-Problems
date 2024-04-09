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
            return;
        }

        size++;
        int index = size;
        arr[index] = val;
        while (index > 1) {
            int parentIndex = index / 2;
            if (arr[index] > arr[parentIndex]) {
                swap(arr[index], arr[parentIndex]);
                index = parentIndex; // Update index to parent
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

    void deletion() {
        if (size == 0) {
            cout << "Underflow, cannot delete" << endl;
            return;
        }
        int ans=arr[1];
        arr[1]=arr[size];
        size--;
        int index=1;
        int maxIndex=index;
        
        while(index<size){
            int leftIndex=2*index;
            int rightIndex=2*index+1;
            if(arr[leftIndex] > arr[maxIndex]){
                maxIndex=leftIndex;
            }
            if(arr[rightIndex] >arr[maxIndex]){
                maxIndex=rightIndex;

            }

             if(maxIndex!=index){
            swap(arr[maxIndex],arr[index]);
            index=maxIndex;
        }
        else{
            break;
        }
        }
       

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

    h.deletion();
    cout << "Heap after deletion: ";
    h.print();

    return 0;
}


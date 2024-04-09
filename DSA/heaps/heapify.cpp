#include<iostream>
using namespace std;

void heapify(int *arr, int n, int index) {
    int leftIndex = 2 * index;
    int rightIndex = 2 * index + 1;
    int maxIndex = index;
    if (leftIndex < n && arr[leftIndex] > arr[maxIndex]) {
        maxIndex = leftIndex;
    }
    if (rightIndex < n && arr[rightIndex] > arr[maxIndex]) {
        maxIndex = rightIndex;
    }

    if (maxIndex != index) {
        swap(arr[maxIndex], arr[index]);
        heapify(arr, n, maxIndex);
    }
}

void buildHeap(int arr[], int n) {
    for (int index = n / 2; index >= 1; index--) {
        heapify(arr, n, index);
    }
}
void heapSort(int arr[],int n){
    while(n!=1){
        swap(arr[1],arr[n]);
        n--;
        heapify(arr,n,1);
    }
}

int main() {
    int arr[] = {0, 10, 20, 5, 11, 6}; // Index 0 is unused, we start indexing from 1
    int n = sizeof(arr) / sizeof(arr[0]) - 1; // -1 to exclude the unused 0th index

    cout << "Original array: ";
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    buildHeap(arr, n);

    cout << "Heapified array: ";
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
heapSort(arr,n);
cout<<"Heap SOrt"<<endl;
 for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[low];
    int i = low + 1;
    int j = high;

    while (i <= j) {
        while (i <= j && arr[i] < pivot) {
            i++;
        }
        while (j >= i && arr[j] > pivot) {
            j--;
        }
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[low], arr[j]);
    return j;
}

void quickSort(vector<int>& nums, int low, int high) {
    if (low < high) {
        int partitionIndex = partition(nums, low, high);
        quickSort(nums, low, partitionIndex - 1);
        quickSort(nums, partitionIndex + 1, high);
    }
}

int main() {
    vector<int> nums = {4, 6, 2, 5, 7, 9, 1, 3};
    int low = 0;
    int high = nums.size() - 1;
    quickSort(nums, low, high);

    cout << "Sorted array: ";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }

    return 0;
}

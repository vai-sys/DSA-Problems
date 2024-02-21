#include<iostream>
#include<vector>
using namespace std;

int merge(vector<int>& arr, int start, int end, vector<int>& temp, int mid) {
    int i = start, j = mid + 1, k = start;
    int count = 0;

    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            count += (mid - i + 1);
        }
    }

    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    while (j <= end) {
        temp[k++] = arr[j++];
    }

    for (i = start; i <= end; i++) {
        arr[i] = temp[i];
    }

    return count;
}

int mergeSort(vector<int>& arr, int start, int end, vector<int>& temp) {
    if (start >= end) return 0;
    int count = 0;

    int mid = start + (end - start) / 2;

    count += mergeSort(arr, start, mid, temp);
    count += mergeSort(arr, mid + 1, end, temp);
    count += merge(arr, start, end, temp, mid);

    return count;
}

int countInversion(vector<int>& arr) {
    int n = arr.size();
    vector<int> temp(n);

    return mergeSort(arr, 0, n - 1, temp);
}

int main() {
    vector<int> arr = {8, 4, 2, 1};
    
    int ans = countInversion(arr);
    cout << "Number of inversions: " << ans << endl;

    return 0;
}


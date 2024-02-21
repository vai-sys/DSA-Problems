#include<iostream>
#include<vector>
using namespace std;

int inversion(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int n = 4;
    int arr[] = {8,4, 2, 1};
    int ans = inversion(arr, n);
    cout <<" Number of Inversion are\t"<< ans << endl;
    return 0;
}

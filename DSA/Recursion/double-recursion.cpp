#include<iostream>
#include<vector>
using namespace std;

void array(int a[], int n, int index, vector<int>& nums) {
    if(index >= n) {
        return;
    }
    a[index] = a[index] * 2;
    nums.push_back(a[index]);
    array(a, n, index + 1, nums);
}

int main() {
    int index = 0;
    int size = 5;
    int arr[] = {10, 20, 30, 40, 50};
    vector<int> ans;
    array(arr, size, index, ans); 
    for(auto num:ans) {
        cout << "Double  "  << " is " << num << endl;
    }
    return 0;
}











// #include<iostream>
// #include<vector>
// using namespace std;

// void array(int a[], int n, int index, vector<int>& nums) {
//     if(index >= n) {
//         return;
//     }
//     a[index] = a[index] * 2;
//     nums.push_back(a[index]);
//     array(a, n, index + 1, nums);
// }

// int main() {
//     int index = 0;
//     int size = 5;
//     int arr[] = {10, 20, 30, 40, 50};
//     vector<int> ans;
//     array(arr, size, index, ans); // Call the function to double elements and store in ans
//     for(auto num : ans) {
//         cout << "Double is "<< num << endl;
//     }
//     return 0;
// }

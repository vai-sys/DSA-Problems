#include<iostream>
#include<queue>
using namespace std;
// int kSmallest(int arr[],int n,int k){
//     priority_queue<int>pq;
//     for(int i=0;i<k;i++){
//         pq.push(arr[i]);
//     }
//     for(int i=k;i<n;i++){
//         if(pq.top() < arr[i]){
//             pq.pop();
//         pq.push(arr[i]);
//         }
       
//     }
//     int ans=pq.top();
//     return ans;

//         }




 int kLargest(int arr[], int n, int k) {
    priority_queue<int, vector<int>, greater<int>> minh;
    for (int i = 0; i < k; i++) {
        minh.push(arr[i]);
    }
    for (int i = k; i < n; i++) {
        if (minh.top() < arr[i]) {
            minh.pop();
            minh.push(arr[i]);
        }
    }
    int ans = minh.top();
    return ans;
}

int main() {
    int arr[] = {7, 10, 4, 20, 15};
    int n = 5;
    int k = 4;

    int result = kLargest(arr, n, k);
    cout << "The " << k << "th largest element is: " << result << endl;

    return 0;
}
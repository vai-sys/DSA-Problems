// #include<iostream>
// using namespace std;
// bool sorted(int arr[],int n,int index){
//     if(index>=n){
//         return false;
//     }
//     if(arr[index]  > arr[index-1]){
//         bool ans= sorted(arr,n,index+1);
//         return ans;
//     }
//     else{
//         return false;
//     }
    
     
// }
// int main(){
//     int n=5;
//     int arr[]={10,20,30,40,50};
//     int index=1;
//     bool result=sorted(arr,n,index);
// if(result){
//     cout<<"sorted"<<endl;
// }
// else{
//     cout<<"NOt Sorted"<<endl;
// }
// return 0;
// }


#include <iostream>
using namespace std;

bool sorted(int arr[], int n, int index) {
   
    if (index == n - 1) {
        return true;
    }
    // If current element is greater than or equal to the next one, array is not sorted
    if (arr[index] >= arr[index + 1]) {
        return false;
    }
    // Check the next element
    return sorted(arr, n, index + 1);
}

int main() {
    int n = 5;
    int arr[] = {10, 20, 90, 40, 50};
    int index = 0;
    bool result = sorted(arr, n, index);
    if (result) {
        cout << "Sorted" << endl;
    } else {
        cout << "Not Sorted" << endl;
    }
    return 0;
}

#include<iostream>
#include<vector>
using namespace std;
void subarray(vector<int>arr,int start, int end){
    if(end==arr.size()){
        return ;
    }

for(int i=start;i<=end;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
subarray(arr,start,end+1);
}

void printsubarray(vector<int>&nums){
    for(int start=0;start<=nums.size();start++){
        subarray(nums,start,start);

    }
}
int main(){
    vector<int>nums={1,2,3,4};
    printsubarray(nums);
    return 0;

}


















// #include<iostream>
// #include<vector>
// using namespace std;

// void subarray(vector<int>& arr, int start, int end) {
//     if (end == arr.size()) {
//         return;
//     }

//     for (int i = start; i <= end; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     subarray(arr, start, end + 1);
// }

// void printsubarray(vector<int>& nums) {
//     for (int start = 0; start < nums.size(); start++) {
//         subarray(nums, start, start);
//     }
// }

// int main() {
//     vector<int> arr = {1, 2, 3, 4, 5};
//     printsubarray(arr);
//     return 0; 
// }

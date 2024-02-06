#include<iostream>
#include<vector>
using namespace std;

int pivot(vector<int>&nums){
   int n = nums.size();
   vector<int> lsum(n, 0);
   vector<int> rsum(n, 0);
   
   for(int i = 1; i < n; i++){
      lsum[i] = lsum[i - 1] + nums[i - 1];
   }
   
   for(int i = n - 2; i >= 0; i--){
      rsum[i] = rsum[i + 1] + nums[i + 1];
   }
   
   for(int i = 0; i < n; i++){
      if(lsum[i] == rsum[i]){
         return i;
      }
   }
   
   return -1;
}

int main(){
   vector<int> nums = {1, 7, 3, 6, 5, 6};
   int ans = pivot(nums);
   cout << ans << endl;
   return 0;
}


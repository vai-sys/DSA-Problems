
#include<iostream>
#include<deque>
#include<vector>
using namespace std;

int WindowMax(vector<int>& nums,int k){
    deque<int>dq1,dq2;
    int ans=0;
    // first process k elements
    for(int i=0;i<k;i++){
        while(!dq1.empty() && nums[i]>nums[dq1.back()]){
            dq1.pop_back();
        }
        while(!dq2.empty() && nums[i] <nums[dq2.back()]){
            dq2.pop_back();
        }
        dq2.push_back(i);
        dq1.push_back(i);
        
    }
    for(int i=k;i<nums.size();i++){
        // remove out of bound elements
        while(!dq1.empty() && i-dq1.front() >=k){
            dq1.pop_front();

        }
        while(!dq2.empty() && i-dq2.front() >=k){
            dq2.pop_front();
        }


        // ab firse current element ke liye chote element ko pop karna hai
        while(!dq1.empty() && nums[i]>=nums[dq1.back()]){
            dq1.pop_back();

        }
        while(!dq2.empty() && nums[i] <=nums[dq1.back()]){
            dq2.pop_back();
        }

        dq1.push_back(i);
        dq2.push_back(i);
      ans+=nums[dq1.front()]+nums[dq2.front()];


    }
    return ans;
}

int main(){
    
    vector<int>nums={1,3,-1,-3,5,3,6,7};
    int k=3;
   int result=WindowMax(nums,k);
   cout<<result<<" ";
    return 0;
} 

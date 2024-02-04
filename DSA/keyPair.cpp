#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
// vector<int> KeyPair(vector<int>nums,int key){
//     // vector<int>ans;
// int start=0;
// int end=nums.size()-1;
// sort(nums.begin(),nums.end());
// while(start<end){
//     if(nums[start]+nums[end]==key){
//         ans.push_back(start);
//         ans.push_back(end);
//          return ans;      
//     }
//     if(nums[start]+nums[end] < key){
//         start++;

//     }
//     if(nums[start]+nums[end] > key){
//         end--;
//     }

// }
// return ans;
// }
bool KeyPair(vector<int>nums,int target){
int start=0;
int end=nums.size()-1;
sort(nums.begin(),nums.end());
while(start<end){
    if(nums[start]+nums[end]==target){
       return true;
}

if(nums[start]+nums[end] < target){
    start++;
}
if(nums[start]+nums[end]>target){
    end--;
}

}
return false;
}

int main(){
    vector<int>nums={1,4,45,6,10,8};
    int target=46;
    bool ans=KeyPair(nums,target);
    if(ans){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
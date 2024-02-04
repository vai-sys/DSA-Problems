#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
vector<int> KeyPair(vector<int>nums,int key){
    vector<int>ans;
int start=0;
int end=nums.size()-1;
sort(nums.begin(),nums.end());
while(start<end){
    if(nums[start]+nums[end]==key){
        ans.push_back(start);
        ans.push_back(end);
         return ans;      
    }
    if(nums[start]+nums[end] < key){
        start++;

    }
    if(nums[start]+nums[end] > key){
        end--;
    }

}
return ans;
}

int main(){
    vector<int>nums={1,4,45,6,10,8};
    int target=16;
    vector<int>result=KeyPair(nums,target);
    cout<<" Indexes are :"<<" ";
    for(auto i:result){
        cout<<'['<<i-1<<']'<<endl;
    }
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

void permutation(vector<int>& nums,int index,vector<vector<int>>& ans){
    if(index > nums.size()){
        return;
    }
    for(int i=index;i<nums.size();i++){
 
   ans.push_back(nums[i]);
   permutation(nums,i+1,ans);
   ans.pop_back(nums[i]);
}

}

vector<vector<int> permutationUnique(vector<int>& nums){

sort(nums.begin(),nums.end());
vector<vector<int>> ans;

permutation(nums,index,ans);
return ans;

}
int main(){
vector<int>nums={1,1,2};
vector<vector<int>>result=permutationUnique(nums);
for(auto i:result){
    cout<<i<<endl;
}
return 0;

}
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

void permutation(vector<int>& nums, int index, set<vector<int>>& ans){
    if(index == nums.size()){
        ans.insert(nums);
        return;
    }
    for(int i = index; i < nums.size(); i++){
        swap(nums[index], nums[i]);
        permutation(nums, index + 1, ans);
        swap(nums[i], nums[index]);
    }
}

vector<vector<int>> permutationUnique(vector<int>& nums){
   set<vector<int>> ans;
   sort(nums.begin(), nums.end());
   permutation(nums, 0, ans);
   return vector<vector<int>>(ans.begin(), ans.end());
}

int main(){
    vector<int> nums = {1, 1, 2};
    vector<vector<int>> result = permutationUnique(nums);
    
    for(auto i : result){
        for(auto it : i){
            cout << it << " ";
        }
        cout << endl;
    }

    return 0;
}

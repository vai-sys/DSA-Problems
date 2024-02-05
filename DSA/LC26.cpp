#include<iostream>
#include<vector>
using namespace std;

int duplicates(vector<int>nums){
    int k=0;
    if(nums.size()==0){
        return 0;
    }
    for(int i=0;i<nums.size();i++){
        if(nums[i]!=nums[i-1]){
            nums[k]=nums[i];
            k++;
        }
    }
    return k;

}
int main(){
    vector<int>nums={0,0,1,1,1,2,2,3,3,4};
    int ans=duplicates(nums);
    cout<<ans<<" ";
    return 0;
}

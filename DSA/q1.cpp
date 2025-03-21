#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int>&nums){
    int i=0;
    int j=nums.size()-1;
    while(i<j){
        if(nums[i]==0){
            swap(nums[i],nums[j]);
            j--;
        }
        else if(nums[j]==0){
            j--;
        }else{
            i++;
        }
        
    }

}

int main(){
    vector<int>nums={4,5,0,1,9,0,5,0};
     solve(nums);
    cout<<"answer is"<<endl;
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<"\t";
    }
    return 0;
    
}
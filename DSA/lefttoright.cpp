#include<iostream>
#include<vector>
using namespace std;

vector<int>leftsortedArray( vector<int> &nums){
    int index=0;
    vector<int>ans;
    while(nums[index]<0){  
        ans.push_back(nums[index]);
        index++;
    }
  
     ans.push_back(nums[index]);
    index++;
  
    

    return ans;
  

}
int main(){
    vector<int>nums={23,-7,12,-10,-11,40,60};
    vector<int>result=leftsortedArray(nums);
    cout<<" Sign sorted array is"<< " ";
    for(int i=0;i<result.size();i++){
        cout<<result[i]<< " ";

    }
    return 0;
}
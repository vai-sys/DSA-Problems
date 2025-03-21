#include<iostream>
#include<climits>
using namespace std;
#include <vector>
void solve (vector<int>&nums,vector<int>& ans,int k){
    if(k==0) return;
   
  
    for(int i=0;i<=nums.size()-k;i++){
        int maxProfit = INT_MIN; 
        for(int j=i;j<i+k;j++){
            maxProfit=max(maxProfit,nums[j]);
        }
        ans.push_back(maxProfit);
    }



}


int main(){
    int n=0;
    int k;
    
    cout<<"enter the value of n"<<endl;
    cin>>n;
    cout<<"enter the value for array"<<endl;
    vector<int>nums(n);
    
    for(int i=0;i<n;i++){
        cin>>nums[i];
        
    }  
     
    cout<<"enter the size of the sliding window";
    cout<<endl;
    cin>>k;
    cout<<endl;
    // vector<int>nums={1,3,-1,-3,5,3,6,7};
    vector<int>ans;
    // int k=3;
   
    solve(nums,ans,k);
    for(int i=0;i<ans.size();i++){
        
        cout<<ans[i]<<"\t";
    }
    cout<<endl;
    return 0;

}
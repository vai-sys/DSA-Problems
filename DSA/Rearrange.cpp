#include<iostream>
#include<vector>
using namespace std;
vector<int> arrange(vector<int> &arr){
    vector<int>result;
    int posIndex=0;
    int negIndex=1;
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            result.push_back(arr[i]);
            posIndex+=2;
        }
        else{
            result.push_back(arr[i]);
            negIndex+=2;
        }

    }
    return result;

}
int main(){
    vector<int>arr={3,-2,1,-5,2,-4};
    vector<int>ans=arrange(arr);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;

}
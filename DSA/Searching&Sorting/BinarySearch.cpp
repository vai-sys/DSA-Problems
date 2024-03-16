#include<iostream>
#include<vector>
using namespace std;
bool Binary(vector<int>arr,int target){
    int n=arr.size();
    int start=0;
    int end=n-1;
    
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==target){
            return true;
        }
        else if(arr[mid] <target){
          start=mid+1;
        }
        else if(arr[mid] > target){
            end=mid-1;
        }

    }
    return false;
}
int main(){
    vector<int>arr={10,20,25,35,40,69,78};
    int target=25;
    if( Binary(arr,target)){
        cout<<"found";
    }
    else{
        cout<<"Not found"<<endl;
    }
    return 0;
}
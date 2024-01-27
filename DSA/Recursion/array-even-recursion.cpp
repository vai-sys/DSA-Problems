#include<iostream>
#include<vector>
using namespace std;

void even(int arr[],int n,int index,vector<int>&Even){
    
    if(index>=n){
        return ;
    }
    if(arr[index] % 2 == 0){
        Even.push_back(arr[index]);
    }
    even(arr,n,index+1,Even);
}
int main(){
    int n=6;
    int index=0;
    int arr[]={10,13,24,27,29,30};
    vector<int>ans;
    even(arr,n,index,ans);
    for( auto num:ans){
        cout<<num<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
int Repeating(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
  if(arr[i]==arr[j]){
        return i+1;
        }
       
       } 
    }
    
}
int main(){
    int nums[]={1,5,2,4,2};
    int n=5;
    int ans= Repeating(nums,n);
    cout<<"ans is "<<ans;
    return 0;
}
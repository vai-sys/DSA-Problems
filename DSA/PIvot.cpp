#include<iostream>
using namespace std;
int pivot(int arr[],int n){
    int rightsum=0;
    int leftsum=0;
    for(int i=0;i<n;i++){
        rightsum+=arr[i];
    }
    for(int j=0;j<n;j++){
        rightsum-=arr[j];
        if(leftsum==rightsum){
          return j;
        }
        leftsum+=arr[j];
    }
    return -1;
}
int main(){
    int n=6;
    int arr[]={1,7,3,1,5,6};
    int ans=pivot(arr,n);
    cout<<" Index for Pivot element is \n"<<ans;
    return 0;
}

#include<iostream>
using namespace std;
int binaryS(int arr[],int n,int start,int end,int target){
    int mid=start+(end-start)/2;
    if(start>end){
        return -1;
    }
    if(arr[mid]==target){
        return mid;
    }
    if(arr[mid]<target){
        // right mein jana hai
       return  binaryS(arr,n,mid+1,end,target);
    }
    else{
       return  binaryS(arr,n,start,mid-1,target);
    }
    
}
int main(){
    int n=7;
    int target=30;
    int arr[]={10,20,30,50,60,70,90};
    int start=0;
    int end=n-1;
    int index=binaryS(arr,n,start,end,target);
    if(index!=-1){
        cout<<"got the element at index \t"<<index<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    }
    return 0;
}

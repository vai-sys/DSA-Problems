#include<iostream>
using namespace std;
bool searching(int arr[],int n,int index,int target){
    if(index>n){
        return false;
    }
    if(arr[index]==target){
        return true;
    }
    searching(arr,n,index+1,target);
    bool ans= searching(arr,n,index+1,target);
    return ans;
}
int main(){
    int n=5;
    int target=20;
    int index=0;
    int arr[]={10,20,30,40,50};
    searching(arr,n,index,target);
   cout<<"target found or not : \n"<< searching(arr,n,index,target)<<endl;
   return 0;
}
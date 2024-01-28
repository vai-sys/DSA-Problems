#include<iostream>
using namespace std;
int find(int arr[],int index,int size,int target){
    if(index>=size){
        return -1;
    }
    if(arr[index]==target){
        return index;
    }
   
    find(arr,++index,size,target);

}
int main(){
    int n=5;
    int arr[]={20,30,10,40,44};
    int index=0;
    int target=40;
    int result=find(arr,index,n,target);
    if(result!=-1){
        cout<<"Element found at "<<endl<<result<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
    return 0;
}
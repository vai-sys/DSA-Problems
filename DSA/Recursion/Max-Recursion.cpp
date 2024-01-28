#include<iostream>
#include<vector>
#include<limits>
using namespace std;
void Maximum(int arr[],int index,int size,int& Max){
    if(index>=size){
        return ;
        }
        Max=max(arr[index],Max);
        Maximum(arr,index+1,size,Max);
        
}
int main(){
     int n=4;
    int arr[]={20,30,10,4};
    int index=0;
    int maximum=INT16_MIN;
    Maximum(arr,index,n,maximum);
    cout<<"Maximum element is\n"<<maximum<<endl;
    return 0;
}
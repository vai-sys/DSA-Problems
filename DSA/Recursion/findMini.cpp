#include<iostream>
#include<limits>
using namespace std;
void mini(int arr[],int n,int index,int& minimum){
    if(index>=n){
        return ;
    }
    minimum=min(minimum,arr[index]);
    mini(arr,n,index+1,minimum);
}
int main(){
    int n=4;
    int arr[]={20,30,10,4};
    int index=0;
    int minimum=INT16_MAX;
    mini(arr,n,index,minimum);
    cout<<"Smallest elememt is :"<<endl<<minimum<<endl;
    return 0;

}
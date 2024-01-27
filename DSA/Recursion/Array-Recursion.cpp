#include<iostream>
using namespace std;
int Array(int a[],int size,int i){
if(size==i){
    return 0;
}
cout<<a[i]<<endl;
Array(a,size,i+1);
}
int main(){
    int index=0;
    int size=5;
    int arr[]={10,20,30,40,50};
    int ans=Array(arr,size,index);
    cout<<ans<<endl;
    return 0;
}
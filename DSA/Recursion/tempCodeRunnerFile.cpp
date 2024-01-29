#include<iostream>
using namespace std;
bool sorted(int arr[],int n,int index){
    if(index>=n){
        return false;
    }
    if(arr[index]  > arr[index-1]){
        bool ans= sorted(arr,n,index+1);
        return ans;
    }
    else{
        return false;
    }
    
     
}
int main(){
    int n=5;
    int arr[]={10,20,30,40,50};
    int index=1;
    bool result=sorted(arr,n,index);
if(result){
    cout<<"sorted"<<endl;
}
else{
    cout<<"NOt Sorted"<<endl;
}
return 0;
}
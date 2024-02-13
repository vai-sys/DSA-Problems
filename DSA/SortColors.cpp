#include<iostream>
using namespace std;
void sortcolors(int arr[],int n){
    int start=0;
    int index=0;
    int end=n-1;
    while(index<=end){
        if(arr[index]==0){
            swap(arr[index],arr[start]);
            start++;
            index++;
        }
        else if(arr[index]==1){
            index++;
        }
       else if(arr[index]==2){
            swap(arr[index],arr[end]);
            end--;
            
        }

    }
}
int main(){
    int arr[]={0,1,1,2,0,2,1};
    int n=7;
    sortcolors(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;

}
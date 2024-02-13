#include<iostream>
using namespace std;
void sort(int arr[],int n){
    int j=0;
    int i=0;
    while(i<n){
 if(arr[i]<0) i++;
    if(arr[i]>0){
        swap(arr[i],arr[j]);
        i++;
        j++;
    }
    }
   

}
int main(){
    int arr[]={23,-7,12,-10,-11,40,60};
    int n=7;
    sort(arr,n);
    cout<<"sorted array is"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;
void Occurance(int arr[],int n,int index,int target,vector<int>&ans){
    if(index>=n){
        return;
    }
    if(arr[index]==target){
        ans.push_back(index);
    }
 Occurance(arr,n,index+1,target,ans);

    
}
int main(){
     int n=5;
    int arr[]={20,40,10,40,44};
    int index=0;
    int target=40;
    vector<int>ans;
     Occurance(arr,n,index+1,target,ans);
    if(!ans.empty()){
        cout<<"element found at index :"<<endl;
        for(auto num:ans){
            cout<<num<<endl;
        }
    }
    else{
        cout<<"element not found"<<endl;
    }
    return 0;

}

// another method

// #include<iostream>
// using namespace std;
// int find(int arr[],int index,int size,int target){
//     if(index>=size){
//         return -1;
//     }
//     if(arr[index]==target){
//         // return index;
//         cout<<index<<endl;
//     }
   
//     find(arr,index+1,size,target);

// }
// int main(){
//     int n=5;
//     int arr[]={20,40,10,40,44};
//     int index=0;
//     int target=40;
//     find(arr,index,n,target);
  
//     return 0;
// }
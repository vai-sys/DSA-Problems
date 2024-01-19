#include<iostream>
#include<vector>
using namespace std;

vector<int> Reaarange(int arr[],int size){
    int posIndex=0;
    int negIndex=1;
    vector<int>ans(size);
    for(int i=0;i<size;i++){
        if(arr[i]>0){
            ans[posIndex]=arr[i];
            posIndex+=2;
        }
        else{
            ans[negIndex]=arr[i];
            negIndex+=2;
        }
    }
    return ans;
}
int main(){
    int n=4;
    int arr[]={4,-1,-2,5};
    vector<int>answer=Reaarange(arr,n);
     for (int i = 0; i < n; i++) {
        cout << answer[i] << " ";
    }

    return 0;
}
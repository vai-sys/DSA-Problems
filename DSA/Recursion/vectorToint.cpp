#include<iostream>
#include<vector>
using namespace std; 

int Answer(vector<int>arr,int index,int& result){
    if(index>=arr.size()){
        return index;
    }
    result=result*10+arr[index];
   return Answer(arr,index+1,result);
}
int main(){
    vector<int>arr={4,1,7,3};
    int index=0;
    int result=0;
    int ans=Answer(arr,index,result);
    cout<<result<<endl;
    return 0;

}
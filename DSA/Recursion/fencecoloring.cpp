#include<iostream>
using namespace std;
int partition(int n,int k){
    if(n==1){
        return k;
    }
    if(n==2){
        return k+k*(k-1);
    } 
    int ans=(k-1)*(partition(n-1,k) +partition(n-2,k));
    return ans;
}
int main(){
    int n=2,k=4;
    int result=partition(n,k);
    cout<<result<<endl;
    return 0;
}
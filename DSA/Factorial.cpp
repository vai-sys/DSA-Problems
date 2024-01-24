#include<iostream>
using namespace std;
int factorial(int n){
    if (n==1){
        return 1;
    }
    if(n==0){
        return 0;
    }
    int ans=factorial(n-1);
    int finalans=n*ans;
    return finalans;
}
int main(){
    int n=6;
    int ans=factorial(n);
    cout<<"ans is \n"<<ans;
    return 0;
}
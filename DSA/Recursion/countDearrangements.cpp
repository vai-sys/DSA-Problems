#include<iostream>
using namespace std;
int solve(int n){
    if(n==1) return 0;
    if(n==2) return 1;
    return (n-1)*(solve(n-1)+solve(n-2));
}
int main(){
    int n=4;
    int ans=solve(n);
    cout<<" Dearrangements is "<<ans<<endl;
    return 0;
}
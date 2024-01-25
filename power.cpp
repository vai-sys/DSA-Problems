#include<iostream>
using namespace std;
int Power(int n){
    if(n==0){
        return 1;
    }
    int ans=2*Power(n-1);
    return ans;
    
    
}
int main(){
    
    int ans=Power(9);
    cout<<ans<<endl;
    
    return 0;
}
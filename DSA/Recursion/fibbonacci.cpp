#include<iostream>
using namespace std;
int series(int n){
if(n==0){
    return 0;

}
if(n==1){
    return 1;
}
int ans=series(n-1)+series(n-2);
return ans;
}
int main(){
    cout<<series(7)<<endl;
    return 0;
}
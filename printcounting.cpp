#include<iostream>
using namespace std;
int printCounting(int n){
    if(n==0){
        return 0;
    }
    cout<<"Count is \n"<<n<<endl;
    printCounting(n-1);
}
int main(){
    int n=9;
    printCounting(n);
    return 0;
}
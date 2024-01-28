#include<iostream>
#include<vector>
using namespace std;
int Digit(int num){
    if(num==0){
        return -1;
    }
    int digit=num%10;
    // tail Recursion
    cout<<digit<<endl;

    num=num/10;
      
    Digit(num);
    // cout<<digit<<endl;     Head-Recursion

  

}
int main(){
  int num=4389;
  Digit(num);
  return 0;

    

}

#include<iostream>
using namespace std;


bool palidrome(string s){

int start=0;
int end=s.length()-1;
while(start <end){
if(s[start]!=s[end]){
    return false;
    start++;
    end--;

}else{
    return true;
}

}

}

int main(){
    string s="aabaa";
   if(palidrome(s)){
    cout<<"string is palidrome"<<endl;
   }
   else{
    cout<<"string is not palidrome"<<endl;
   }
    return 0;
}
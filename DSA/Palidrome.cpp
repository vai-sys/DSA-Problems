#include<iostream>
using namespace std;


bool palidrome(string s){

int start=0;
//initial point
int end=s.length()-1;
// end ppint
while(start <end){
    // compare start and end
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
    string s;
    cout<<"Enter a string "<<endl;
    cin>>s;


   if(palidrome(s)){
    cout<<"string is palidrome"<<endl;
   }
   else{
    cout<<"string is not palidrome"<<endl;
   }
    return 0;
}
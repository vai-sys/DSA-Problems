#include<iostream>
using namespace std;
bool palidrome(string s,int start,int end){
if(s[start]!=s[end]){
    return false;
}
if(s[start]==s[end]){
    return true;
}
return palidrome(s,++start,--end);


}
int main(){
    string s="racca";
    int n=s.length();
    int start=0;
    int end=n-1;
    bool ans=palidrome(s,start,end);
    if(ans){
        cout<<"it is palidrome"<<endl; ;
    }else{
        cout<<"it is not palidrome"<<endl;
    }
    return 0;
}
#include<string>
#include<iostream>
using namespace std;

void solve(string str, string &ans) {
    int n = str.length();
    if (n == 0) return;

    ans += str[0];  

    for (int i = 1; i < n; i++) {
        if (str[i] != str[i - 1]) {
            ans += str[i]; 
        }
    }
}
int main(){
    string str="aabcdde";
    string ans="";
    solve(str,ans);
    cout<<"output is"<<endl;
    for(auto ch:ans){
       
        cout<<ch;
    }
    return 0;

}
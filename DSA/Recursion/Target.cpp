#include<iostream>
using namespace std;

int Target(string s,char target,int i){
    int n=s.length();
    if(i>n){
        return -1;
    }
    if(s[i]==target){
        return i;
    }
    return Target(s,target,i+1);
}
 
int main(){
char target='z';
string s="vaishnavi";
int index = Target(s, target, 0); 
    if (index != -1) {
        cout << "Index of '" << target << "' in \"" << s << "\" is: " << index << endl;
    } else {
        cout << "Target character not found in the string." << endl;
    }
return 0;
}
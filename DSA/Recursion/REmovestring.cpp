#include<iostream>
#include<vector>
#include<string>
using namespace std;
void remove (string &s,  string part){
int index=s.find(part); 
if (index != string::npos) {

    string left=s.substr(0,index);
    string right=s.substr(index+part.size(),s.size());
    s=left+right;
    remove(s,part);
}

}
string recur(string s,string part){
    remove(s,part);
    return s;
}
int main(){
    string s="aabcbcaabcccababc";
    string part="abc";
   string result= recur(s,part);
  cout<<result<<endl;
    return 0;
}
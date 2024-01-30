#include<iostream>
using namespace std;

void find(string str,int index,string output){
    if(index>=str.size()){
        // output store ho chuka hai;
        cout<<output<<endl;
        return;

    }

    char ch=str[index];
    // exclude
    find(str,index+1,output);
    // include
    output.push_back(ch);
    find(str,index+1,output);

}
int main(){
int index=0;
string output="";
string str="abc";
find(str,index,output);
cout<<output<<endl;
return 0;
}
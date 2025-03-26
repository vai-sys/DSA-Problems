#include<string>
#include<iostream>
using namespace std;

string solve(string &str,int n,int time){
    int i=0;
    while(time >0){
        while(i<str.length()-1){
            if(str[i]=='B' && str[i+1]=='G'){
                swap(str[i],str[i+1]);
                i++;    
            }
            i++;
        }
        time--;
        // for(int i=0;i<str.length();i++){
        //     cout<<str[i];
        //  }
        //  cout<<endl;
       }
    return str;
}

int main(){
    int time=2;
    int n=5;
    string str="BGGBG";
    string ans=solve(str,n,time);
     for(int i=0;i<ans.length();i++){
        cout<<ans[i];
     }
     return 0;

}


// left-Right

// #include<iostream>
// #include<vector>
// using namespace std;
// int last(string s,char target,int index,int &ans ){
//  if(index>s.size()){
//     return -1;
//  }
//  if(s[index]==target){
//   ans= index;
//  }
//    last(s,target,index+1,ans);
// }
// int main(){
//     int ans=-1;
//     string s="abcddge";
//     char target='d';
//     int index=0;
   
//     last(s,target,index,ans);
    
// cout<<ans<<endl;

//   return 0;
// }


// right-left




#include<iostream>
using namespace std;


int RTL(string& s,int index,char x){
    if(index<0){
        return -1;
    }
    if(s[index]==x){
        return index;
    }
    RTL(s, index-1, x);
}
int main(){
  
    int ans=-1;
    char x='d';
    string s="abcdded";
      int index=s.length()-1;
    int result=RTL(s, index, x);
    cout<<result<<endl;
    
    return 0;
}

#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
vector<int> nextSmaller(int arr[],int n){
    vector<int>ans;
    stack<int>st;
    for(int i=n-1;i>=0;i--){
        int curr=arr[i];
        while( !st.empty() && st.top()>=curr){

            st.pop();
            
        }
        if(st.empty()){
            ans.push_back(-1);
        }
        else{
           ans.push_back(st.top());
        }
       
        st.push(curr);
        
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main(){
    
    int n=4;
    int arr[]={4,1,6,3};
    vector<int>result=nextSmaller(arr,n);
    for(auto i:result){
        cout<<i<<endl;
    }
    cout<<endl;
    return 0;
}


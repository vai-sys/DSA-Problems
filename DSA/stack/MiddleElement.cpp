#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int> &st, int pos, int &middle){
    int temp;
    if(pos==1){
     middle=st.top();
    }
    else{
        pos--;
         temp=st.top();
        st.pop();
        solve(st,pos,middle);
        st.push(temp);

    }
    
}
int getMiddleElement(stack<int>&st){
    int pos=-1;
    int size=st.size();
    if(st.empty()){
        cout<<"Stack is Empty"<<endl;
        return 0;
    }
    else{
        if(size & 1){
            pos=(size/2)+1;

        }
        else{
            pos=size/2;
        }
    }
    int middle=-1;
    solve(st,pos,middle);
    return middle;
}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(60);
    int ans =getMiddleElement(st);
    cout<<"Middle Element is"<<ans<<endl;
    return 0;
}
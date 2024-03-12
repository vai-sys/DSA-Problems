#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
st.push(20); 
st.push(29);
st.push(78);
cout<<"size of stack\t"<<st.size()<<endl;
st.pop();
cout<<"size of stack\t"<<st.size()<<endl;
cout<<st.top()<<endl;
if(st.empty()){
    cout<<"stack is empty"<<endl;
}
else{
    cout<<"stack is not empty"<<endl;
}

return 0;

}

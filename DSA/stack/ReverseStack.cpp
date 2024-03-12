#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int>& st, int element){
    if(st.empty()){
        st.push(element);
        return;
    }

    int temp = st.top();
    st.pop();
    insertAtBottom(st, element);
    st.push(temp);
}

void reverseStack(stack<int>&st){
    if(st.empty()){
        cout << "Stack is Empty" << endl;
        return;
    }

    int temp = st.top();
    st.pop();
    reverseStack(st);
    insertAtBottom(st, temp);
}

int main()
{
    stack<int> st, st2;
    // push elements into
    // the stack
    for (int i = 1; i <= 4; i++) {
        st.push(i);
    }
 
    st2 = st;
 
    cout << "Original Stack" << endl;
    // printing the stack after reversal
    while (!st2.empty()) {
        cout << st2.top() << " ";
        st2.pop();
    }
    cout<<endl;
   
    // function to reverse
    // the stack
    reverseStack(st);
    cout << "Reversed Stack" << endl;
    // printing the stack after reversal
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}
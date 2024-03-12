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

int main(){
    stack<int> st;
    st.push(10);
    st.push(30);
    st.push(50);
    int element = 200;
    
    cout << "Original Stack: ";
    stack<int> originalStack = st;  
    while (!originalStack.empty()) {
        cout << originalStack.top() << " ";
        originalStack.pop();
    }

    insertAtBottom(st, element);

    cout << "\nStack after inserting " << element << " at the bottom: ";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    cout << endl;
    
    return 0;
}


#include<iostream>
#include<stack>
using namespace std;

// Recursive function to insert an element in a sorted manner
void sort(stack<int>& st, int element) {
    // If the stack is empty or the top element is smaller, push the new element
    if (st.empty() || st.top() <= element) {
        st.push(element);
        return;
    }

    // If the top element is greater, pop and call the function recursively
    int temp = st.top();
    st.pop();
    sort(st, element);
    
    // After the recursive call, push back the popped element
    st.push(temp);
}

int main() {
    stack<int> st;
    int element = 25;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    sort(st, element);

    cout << "Sorted Stack" << endl;
    
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    
    return 0;
}

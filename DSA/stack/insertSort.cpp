#include<iostream>
#include<stack>
using namespace std;

void Insertsort(stack<int>& st, int element) {
    if (st.empty() || st.top() <= element) {
        st.push(element);
        return;
    }

    int temp = st.top();
    st.pop();
    Insertsort(st, temp);
    st.push(temp);
}

void sort(stack<int>& st) {
    if (st.empty()) {
        return;
    }
    int temp = st.top();
    st.pop();
    sort(st);
    Insertsort(st, temp);
}

int main() {
    stack<int> st;
    int element = 25;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    stack<int> sortedStack;
    sort(st);

    // Copy sorted elements to a separate stack for printing
    while (!st.empty()) {
        sortedStack.push(st.top());
        st.pop();
    }

    cout << "Sorted Stack" << endl;

    // Print the sorted elements
    while (!sortedStack.empty()) {
        cout << sortedStack.top() << " ";
        sortedStack.pop();
    }

    return 0;
}

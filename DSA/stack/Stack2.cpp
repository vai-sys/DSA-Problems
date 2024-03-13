#include<iostream>
using namespace std;

class MyStack {
public:
    int size;
    int top1;
    int top2;
    int *arr;

    MyStack(int size) {
        this->size = size;
        this->top1 = -1; 
        this->top2 = size; 
        this->arr = new int[size];

        
        // for (int i = 0; i < size; i++) {
        //     arr[i] = 0;
        // }
    }

    void push1(int data) {
        if (top2 - top1 == 1) {
            cout << "Overflow" << endl;
        }
        else {
            top1++;
            arr[top1] = data;
        }
    }

    void push2(int data) {
        if (top2 - top1 == 1) {
            cout << "Overflow" << endl;
        }
        else {
            top2--;
            arr[top2] = data;
        }
    }

    void pop1() {
        if (top1 == -1) {
            cout << "Underflow" << endl;
        }
        else {
            arr[top1] = 0;
            top1--;
        }
    }

    void pop2() {
        if (top2 == size) {
            cout << "Underflow" << endl;
        }
        else {
            arr[top2] = 0;
            top2++;
        }
    }

    void print() {
        cout << "TOP1\t" << top1 << endl;
        cout << "TOP2\t" << top2 << endl;
        for (int i = 0; i < size; i++) {
            cout << arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main() {
    MyStack st(6);
    st.push1(10);
    st.push1(20);
    st.push2(80);
    st.push1(39);
    st.push2(70);
    st.push2(60);
    st.push2(30);
    st.push1(30);
    st.print();

    return 0;
}

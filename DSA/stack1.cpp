#include<iostream>
#include<vector>

using namespace std;

class Stack{
public:
int* arr;
 int size;
 int top;
 Stack(int size){
    arr=new int[size];
    this->size=size;
    this->top=-1;
    
 }

 bool isFull(){
    if(top==size){
        return true;
    }
    return false;
 }
 bool isEmpty(){
    if(top==-1){
        return true;
    }
    return false;
 }

 void push(int val){
    if(isFull()) return ;
     top++;
    arr[top]=val;
   
 }
 void  pop(){
    if(isEmpty()){
        return;
    }
    int data=arr[top--];
   
    cout<<"elemt to be deleted is "<<endl<<data<<endl;
 }
 void peep(){
     if(isEmpty()) return;
     cout<<"elemtn is"<<endl<<arr[top]<<endl;
 }

};
int main(){

Stack st(6);
st.push(10);
st.push(40);
st.push(50);
st.push(60);
st.push(60);
st.push(22);
st.pop();
st.peep();


    return 0;
}
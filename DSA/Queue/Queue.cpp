#include<iostream>
using namespace std;
class queue{
    public:
    int size;
    int *arr;
    int rear;
    int front;
    queue(int size){
        this->size=size;
        rear=-1;
        front=-1;
        arr=new int[size];
      
    } 

    void push(int val){
        if(rear==size-1){
            cout<<"overflow"<<endl;
        }
        else if(rear==-1 && front==-1){
            front++;
            rear++;
            arr[rear]=val;
        }
        else{
            rear++;
            arr[rear]=val;
        }
    }
    void pop(){
        if(front==-1 && rear==-1){
            cout<<"Underflow"<<endl;
        }
        else if(front==rear){
            arr[front]=-1;
            front=-1;
            rear=-1;
        }
        else{
            arr[front]=-1;
            front++;
        }
    }
    bool isEmpty(){
        if(front==-1 && rear==-1){
            return true;
        }
        else{
            return false;
        }
    }

    int getsize(){
        int size= rear-front+1;
        cout<<"size:- \t"<<size<<endl;
    }
    int getFront(){
        if(front==-1){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        else{
            int firstPos= arr[front];
            cout<<"Front :-\t" <<firstPos ;
            cout<<endl;
            return 0;
                   }
    }
  void print(){
     cout<<"Queue is\t";
    for(int i=front;i<=rear;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
  }
     
};

int main(){
    queue q(6);
    q.push(3);
    q.push(7);
    q.push(10);
    q.print();
    q.getsize();
    q.getFront();
    
    return 0;
}
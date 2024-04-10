#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int>pq;
    priority_queue<int,vector<int>,greater<int>>minheap;
    pq.push(20);
    pq.push(30);
    pq.push(49);
    cout<<"Top element of  pq is"<<pq.top()<<endl;
    pq.pop();
     cout<<"Top element of  pq is"<<pq.top()<<endl;

     minheap.push(10);
     minheap.push(20);
     minheap.push(30);
     minheap.push(40);
     cout<<"Top element of  pq is"<<minheap.top()<<endl;
      minheap.pop();
     cout<<"Top element of  pq is"<<minheap.top()<<endl;
     
     return 0;
}


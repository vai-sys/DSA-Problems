
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
        arr=new int[size];
        rear=-1;
        front=-1;
    }
    void enqueue(int data){
        if((rear==size-1 && front==0) || ( rear+1 % size==front ) ){
            cout<<"overflow"<<endl;
        }
        else if(front==-1 && rear==-1){
            front=0;
            rear=0;
            arr[rear]=data;
        }
        else if(front!=0 && rear==size-1){

          rear=0;
          arr[rear]=data;
        }
        else{
            rear++;
            arr[rear]=data;
        }
    }
    void dequeue(){

        if(front==-1 && rear==-1){
            cout<<"underflow"<<endl;
        }
        else if(front==rear){
            front=-1;
            rear=-1;
        }
        else if(front==size-1){
            front=0;
        }
        else{
            front = (front + 1) % size;
        }
    }


  void displayQueue()
{
	if (front == -1)
	{
		printf("\nQueue is Empty");
		return;
	}
	printf("\nElements in Circular Queue are: ");
	if (rear >= front)
	{
		for (int i = front; i <= rear; i++)
			printf("%d ",arr[i]);
	}
	else
	{
		for (int i = front; i < size; i++)
			printf("%d ", arr[i]);

		for (int i = 0; i <= rear; i++)
			printf("%d ", arr[i]);
	}
}



};

int main(){
    queue q(5);

	
	q.enqueue(14);
	q.enqueue(22);
	q.enqueue(13);
	q.enqueue(-6);
    q.enqueue(8);
    q.dequeue();
     q.dequeue();
      q.dequeue();
       q.dequeue();
       q.enqueue(14);
       q.enqueue(15);
       q.enqueue(16);
       q.enqueue(18);
       q.enqueue(19);
    
   
    q.displayQueue();

return 0;
}
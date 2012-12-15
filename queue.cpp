	#include<iostream>
	#define queue_size 100 
	using namespace std;
		

		class Queue
{
			private:
		
	int arr[queue_size];
	int front;
	int rear;
	bool queue_full()
{
	if(front == rear+1 || (front == 1 && rear == queue_size-1) )
{
	return 1;
}
	return 0;
}
	bool queue_empty()
{
	if((front == -1 && rear == -1) || front==rear)
{
	return 1;
}
	return 0;
}
			public:	

	Queue()
{
		front = -1 ;
		rear= -1;
}
	void queue_insertion(int num)
{
		if(!queue_full() )
{
	if( front == -1 && rear == -1)
{
	front = 0;
	arr[front]=num;
	rear = 1;
}
	else
{
		arr[rear]=num;

	rear= (rear+1)%queue_size;
}
}
	else
{
	cout<<"queue full"<<endl;
}
}
	int queue_deletion()
{
		if(!queue_empty() )
{
	int temp=arr[front];
	front= (front+1)%queue_size;
	return temp;
}
	cout<<"queue empty\t";
	return 1;
}
	void display_queue()
{
	if(!queue_full())
{
int temp1=front;
int temp=rear;	
	for(int i=temp1;temp1<=temp-1 && i<queue_size ;temp1++,++i)
{
	cout<<arr[temp1]<<endl;
}
}
else
{
	cout<<"queue FULL";
}
}
};
	int main()
{
	Queue *queue=new Queue;
	for(int i=0;i<4;i++)
{
	int n;
	cin>>n;
	queue->queue_insertion(n);
}	
	cout<<queue->queue_deletion()<<"\t";
	queue->display_queue();	

 	cout<<queue->queue_deletion()<<endl;
 	cout<<queue->queue_deletion()<<endl;
 	cout<<queue->queue_deletion()<<endl;
 	cout<<queue->queue_deletion()<<endl;
 	cout<<queue->queue_deletion()<<endl;
	delete queue;
	return 0;
}

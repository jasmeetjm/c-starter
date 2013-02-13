/*to implement queue from array */

#include<stdio.h>
#define QUEUE_SIZE 10 
	
int arr[QUEUE_SIZE];
int index1 = -1,index2 = -1;//INDEX1 FOR STARTING POINT..INDEX2 FOR LAST 
int insert(int num) {
	if(((index2 + 1) % QUEUE_SIZE) == index1) {		//if queue is full
		fprintf(stderr,"QUEUE IS FULL");
		return 1;
	}
	if(index1 == -1 && index2 == -1)		//when first has to be entered
		index1 = 0;

	arr[(++index2 % QUEUE_SIZE)]=num;		//for general cases
	return arr[index2];
}

int delete() {
	if(index1 == -1 && index2 == -1) {		//when queue is empty
		fprintf(stderr,"QUEUE IS EMPTY\n");
		return -1;
	}	
	int temp=arr[index1];			
	index1=(++index1 % QUEUE_SIZE);			//to delete from queue
	if(index1 == index2) {				//when queue becomes empty after deletion
		index1 = -1;
		index2 = -1;
	}
	return temp;
}

int main()
{
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	insert(6);
	insert(7);
	printf("\t%d\n",delete());
	printf("\t%d\n",delete());
	while(index1!=index2) {
		printf("%d\n",arr[index1]);	
		index1=(index1 + 1)%QUEUE_SIZE;
	}
	printf("%d\n",arr[index1]);
	return 0;
}

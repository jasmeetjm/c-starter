#include<stdio.h>
#define STACK_SIZE 5 
	
	
	int arr[STACK_SIZE];
	int index = -1;

int push(int num)
{	
		if(index==(STACK_SIZE-1))
{
	printf("STACK IS FULL");	
		return -1;
}
		arr[++index]=num;
		return arr[index];
}
int pop()
{
		if(index==-1)
{
		printf("STACK IS EMPTY");
		return 1;
}
		int temp=arr[index];
		--index;
		return temp;
}

	int main()
{	push(134);
	push(87);
	push(123);
		push(2);
	push(32);
		push(13);
		push(12);
printf("%d\t",pop());
printf("%d\t",pop());
	
		while(index!=-1)
{
		printf("\n%d\n",arr[index]);
		--index;
}
		return 0;
}

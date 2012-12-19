#include<stdio.h>
#include<stdlib.h>	
typedef struct link_list
{
	int data;
	struct link_list *next;
}ll;
	ll *head=NULL;

	ll push(int num)
{
		if(head==NULL)
{
	head=malloc(sizeof(ll));
	head->data=num;
	head->next=NULL;
printf("%d\n",head->data);	
	return *head;
}
	ll *temp;
 temp=malloc(sizeof(ll));
	
	temp=head;
	while(temp->next!=NULL)
{

	printf("%d\n",temp->data);
	temp=temp->next;

	printf("%d\n",temp->data);
}
temp->next=malloc(sizeof(ll));
	temp->next->data=num;
	temp->next->next=NULL;
	temp=temp->next;
	printf("%d\n",temp->data);
	return *temp;
}
 ll pop()
{
	if(head==NULL)
{
	fprintf(stderr,"STACK EMPTY\n");
	return;
}
	ll *temp;
	temp=malloc(sizeof(ll));
	temp=head;
while(temp->next->next!=NULL)
	{
		temp=temp->next;
	printf("%d\t",temp->data);
}
ll *temp1 = malloc(sizeof(ll));
	temp1=temp;
	temp1=temp1->next;	
	printf("%d\n",temp1->data);
	temp->next=NULL;
	return *temp1;
}
	int main()
{
	push(12);
	
	push(1);
	push(2);
	push(10);
	pop();	
	push(112);
	push(122);
pop();
	return 0;
}

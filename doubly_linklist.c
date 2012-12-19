#include<stdio.h>
#include<stdlib.h>
	
typedef struct linklist
{
	int data;
	struct linklist *next;
	struct linklist *prev;
}ll;	
	ll *head=NULL;
	
	ll insertion(int num)
{
	if(head==NULL)
{
		head=malloc(sizeof(ll));
	head->data=num;
	head->next=NULL;
	head->prev=NULL;
	printf("%d\t",head->data);
	return *head;	
}
	ll *temp=malloc(sizeof(ll));

	if(head->next==NULL)
{
	head->next=temp;
	temp->data=num;
	temp->next=head;
	temp->prev=head;
	head->prev=temp;
	printf("%d\t",temp->data);
	return *temp;
}
	temp=head;
	while(temp->next!=head)
{
	temp=temp->next;
}
	temp->next=malloc(sizeof(ll));
	temp->next->data=num;
	temp->next->next=head;
	temp->next->prev=temp;
	head->prev=temp->next;
	temp=temp->next;
	printf("%d\t",temp->data);
	return *temp;
}
		

	ll deletion(int num)
{
	if(head==NULL)
{
	fprintf(stderr,"linklist empty");
	return;
}		
	ll *temp=malloc(sizeof(ll));
	
	if(head->data==num && head->next->next == head)
{	
	temp=head;
	head=head->next;
	head->next=NULL;
	head->prev=NULL;

	return *temp;
}
	if(head->data==num)
{
	head->next->prev=head->prev;
	head->prev->next=head->next;
	head=head->next;
	return;
}
	if(head->next->data == num && head->next->next==head)
{
	temp=head->next;
	head->next=NULL;
	head->prev=NULL;
	printf("%d\n",temp->data);
	return *temp;
}
	
	temp=head;
	while(temp->data!=num && temp->next!=head)
{
	temp=temp->next;
}
	if(temp->data==num)
	{
		temp->prev->next=temp->next;
		temp->next->prev=temp->prev;
		return;	
}
	if(temp->next==head)
{
	fprintf(stderr,"number not available\n");
	return;
}
}
	
int main()
{	
	insertion(12);
	insertion(123);
	insertion(1234);
//	deletion(12);
//	deletion(1234);
			printf("%d\n",head->next->data);
			printf("%d\n",head->next->next->data);
			printf("%d\n",head->next->next->next->data);
			printf("%d",head->next->next->next->next->data);
	return 0;
}

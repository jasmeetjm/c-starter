#include<stdio.h>
#include<stdlib.h>

typedef struct link_list
{
	int data;
	struct link_list *next;
}ll;
	ll *head=NULL;
ll insert(int num)
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
	ll delete()
{
	if(head==NULL)
{
	printf("QUEUE EMPTY\n");
	return;
}
	ll *temp=malloc(sizeof(ll));
	temp=head;
	printf("%d\t",temp->data);
		head=head->next;
		return *temp;
}

int main()
{	
	insert(12);
	insert(1);
	insert(2);
	insert(10);
	delete();
	insert(112);
	delete();
delete();	
	delete();
	delete();
	delete();
	return 0;
}

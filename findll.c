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
	return *head;
}
	ll *temp;
 	temp=malloc(sizeof(ll));
	
	temp=head;
	while(temp->next!=NULL)
{
	temp=temp->next;
}
	temp->next=malloc(sizeof(ll));
	temp->next->data=num;
	temp->next->next=NULL;
	temp=temp->next;
	return *temp;

}
	ll findlinklist()
{
	ll *temp=malloc(sizeof(ll));
	temp=head;
	if(temp->next == NULL || temp->next->next == NULL)
{
	printf("third last node not exist\n");
	return;
}

	while(temp->next->next->next!=NULL)
{
		temp=temp->next;
}
	printf("%d\n",temp->data);
	return *temp;
}	
int main()
{
	int i=0;
	for(i=0;(4*i)<100;i++)
{
	insert((4*i));
}

/*
int j=0;
while((4*j)<100)
{
printf("%d\n",head->data);
head=head->next;
++j;
}*/
	findlinklist();
	return 0;
}


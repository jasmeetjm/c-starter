/*insert and then find a THIRD LAST node in a link list */

#include<stdio.h>
#include<stdlib.h>

typedef struct link_list	//created a structure of link list
{
	int data;
	struct link_list *next;
}list;

list *head=NULL;	// created head
list insert(int num) {	
	if(head==NULL) {	//if link list is empty
		head=malloc(sizeof(list));	//allocated memory
		head->data=num;
		head->next=NULL;
		return *head;
	}
	list *temp;		
 	temp=malloc(sizeof(list));
	temp=head;
	while(temp->next!=NULL)		//till it reached the last position where node is to be added
		temp=temp->next;
		
	temp->next=malloc(sizeof(list));
	temp->next->data=num;
	temp->next->next=NULL;
	temp=temp->next;
	return *temp;
}

list findlinklist()	//to find a third last node in a link list
{
	list *temp=malloc(sizeof(list));
	temp=head;
	if(temp==NULL || temp->next == NULL || temp->next->next == NULL) {	//if there are 0,1 or 2 nodes in a link list 
		printf("third last node not exist\n");
		return;
	}
	while(temp->next->next->next!=NULL) 	//till we reach third last node
		temp=temp->next;
	
	printf("%d\n",temp->data);	//retrieving data of third last node
	return *temp;
}	
int main()
{
	int i=0;
	for(i=0;(4*i)<100;i++)
		insert((4*i));

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


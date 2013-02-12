/* to create a doubly link list */

#include<stdio.h>
#include<stdlib.h>

typedef struct linklist //creating a structure of link list
{
	int data;		
	struct linklist *next;
	struct linklist *prev;
}list;	
list *head=NULL;	//declaring head of linklist

list insertion(int num) {
	if(head==NULL) {	
		head=malloc(sizeof(list));	//allocating memory to head
		head->data=num;			//entering data in head
		head->next=NULL;
		head->prev=NULL;
		printf("%d\t",head->data);
		return *head;	
	}
	list *temp=malloc(sizeof(list));		//allcoaing  memory to the node
	if(head->next==NULL) {				
		head->next=temp;
		temp->data=num;
		temp->next=head;
		temp->prev=head;
		head->prev=temp;
		printf("%d\t",temp->data);
		return *temp;
	}
	temp=head;
	while(temp->next!=head) 	//finding particular position to enter the node		
		temp=temp->next;
	temp->next=malloc(sizeof(list));
	temp->next->data=num;		
	temp->next->next=head;
	temp->next->prev=temp;
	head->prev=temp->next;
	temp=temp->next;
	printf("%d\t",temp->data);
	return *temp;
}

list deletion(int num) {
	if(head==NULL) {	//if linklist is empty
		fprintf(stderr,"linklist empty");	
		return;
	}		
	list *temp=malloc(sizeof(list));	
	if(head->data==num && head->next->next == head) { //if there are only 2 nodes in a linkedlist
		temp=head;	
		head=head->next;
		head->next=NULL;
		head->prev=NULL;
		return *temp;
	}
	if(head->data==num) {	//if there is only 1 node in a linked list
		head->next->prev=head->prev;
		head->prev->next=head->next;
		head=head->next;
		return;
	}
	/*if(head->next->data == num && head->next->next==head) {	
		temp=head->next;
		head->next=NULL;
		head->prev=NULL;
		printf("%d\n",temp->data);
		return *temp;
	}*/
	
	temp=head;	
	while(temp->data!=num && temp->next!=head) //to find a node to be deleted
		temp=temp->next;
	if(temp->data==num)	// node to be deleted
	{
		temp->prev->next=temp->next;	
		temp->next->prev=temp->prev;
		return;	
	}
	if(temp->next==head) {	//if we not found node
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

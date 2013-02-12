/*to detect if there is a loop in a link list and correct it */

#include<stdio.h>
#include<stdlib.h>

typedef struct link_list //creating a structure for a link list
{
	int data;		
	struct link_list *next;
}list;

list *head=NULL;
list *temporary=NULL;

list insert(int num)		//to insert node in a link list
{
	if(head==NULL) {
	head=malloc(sizeof(list));
	head->data=num;
	head->next=NULL;
	return *head;
	}
	list *temp;
 	temp=malloc(sizeof(list));
	temp=head;
	while(temp->next!=NULL)
		temp=temp->next;

	temp->next=malloc(sizeof(list));
	temp->next->data=num;
	temp->next->next=NULL;
	temp=temp->next;
	return *temp;
}

list enter_loop(int num)		//to enter into a loop manually
{
	list *temp=malloc(sizeof(list));
	temp=head;
	while(temp->data!=num)
		temp=temp->next;

	list *temp1=malloc(sizeof(list));
	temp1=temp;
	while(temp1->next!=NULL)
		temp1=temp1->next;

	temp1->next=temp;
	printf("%d\n",temp1->next->data);
	return *temp1;	
}

list loop_detection()		//to detect a loop
{
	list *temp1=malloc(sizeof(list));	//declare 1st pointer	
	temp1=head;		
	list *temp2=malloc(sizeof(list));	//declare 2nd pointer
	temp2=head;
	printf("%d\n",temp2->next->data);	
	while(temp2->next!=NULL && temp2->next->next!=NULL) {	//increase one pointer by 1 and another by 2.
		temp1=temp1->next;
		temp2=temp2->next->next;
		printf("%d\t%d\n",temp1->data,temp2->data);	
		if(temp1==temp2) {			//if they meet at any point,it proves there is a loop
			printf("there is loop\n");
			temporary=malloc(sizeof(list));
			temporary=temp1;
			return *temp1;
		}		
	}			
	printf("there is no loop\n");		
	return ;	
}

list loop_correction()			//to correct a loop
{
	if(temporary==NULL) {
		printf("there is no loop\n");
		return;
	}
	list *temp=malloc(sizeof(list));		
	temp=head;
	while(temporary->next->data!=temp->next->data) {//increase pointer 1 from head & another where they met in loop_detection one by one
		temporary=temporary->next;		
		temp=temp->next;	//they will meet at the point where there is looppoint
		printf("%d\t%d\n",temporary->data,temp->data);
	}	
	printf("%d\n",temp->next->data);
	temporary->next=NULL;		//removing loop
	return *(temp->next);
}

int main()
{
	int i=0;
	while((4*i)<100) {
		insert((4*i));
		++i;
	}
	enter_loop(44);
/*		while(head->next!=NULL)
{
	printf("%d\t",head->data);
	head=head->next;
}*/
	loop_detection();
	loop_correction();

	while(head->next!=NULL) {
		printf("%d\t",head->data);
		head=head->next;
	}
	return 0;
}

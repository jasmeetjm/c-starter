#include<stdio.h>
#include<stdlib.h>

typedef struct link_list
{
	int data;
	struct link_list *next;
}ll;
	ll *head=NULL;
	ll *temporary=NULL;
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
	ll enter_loop(int num)
{
	ll *temp=malloc(sizeof(ll));
	temp=head;
	while(temp->data!=num)
{
	temp=temp->next;
}
	ll *temp1=malloc(sizeof(ll));
	temp1=temp;
	while(temp1->next!=NULL)
{
	temp1=temp1->next;
}
	temp1->next=temp;
	printf("%d\n",temp1->next->data);
	return *temp1;	
}
	ll loop_detection()
{
	ll *temp1=malloc(sizeof(ll));
	temp1=head;
	ll *temp2=malloc(sizeof(ll));
	temp2=head;
	printf("%d\n",temp2->next->data);	
while(temp2->next!=NULL && temp2->next->next!=NULL)
{
	temp1=temp1->next;
	temp2=temp2->next->next;
	printf("%d\t%d\n",temp1->data,temp2->data);	
if(temp1==temp2)
{
	printf("there is loop\n");
	temporary=malloc(sizeof(ll));
	temporary=temp1;
	return *temp1;
}		
}		

	printf("there is no loop\n");		
	return ;	
}
	ll loop_correction()
{
	if(temporary==NULL)
{
	printf("there is no loop\n");
	return;
}
	ll *temp=malloc(sizeof(ll));
	temp=head;
while(temporary->next->data!=temp->next->data)
{
	temporary=temporary->next;
	temp=temp->next;
	printf("%d\t%d\n",temporary->data,temp->data);
}	
	printf("%d\n",temp->next->data);
	temporary->next=NULL;
	return *(temp->next);
}

int main()
{
	int i=0;
	while((4*i)<100)
{
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

		while(head->next!=NULL)
{
	printf("%d\t",head->data);
	head=head->next;
}
		return 0;
}

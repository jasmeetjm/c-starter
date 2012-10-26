#include<stdio.h>
int main()
{
int i;
int no=0;
printf("enter no.");
scanf("%d",&i);
int temp=i;
while (temp!=0)
{
no=(no*10)+(temp%10);
temp=temp/10;
}
printf("the reverse number of %d is %d\n\n",i,no);

}

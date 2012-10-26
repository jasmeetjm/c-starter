#include<stdio.h>
int main()
{
int pos1,num1;
printf("enter ur no.");
scanf("%d",&num1);
printf("enter the position of bit u want to set");
scanf("%d",&pos1);
num1=num1|(1<<(pos1-1));
printf("%d",num1);
return 0;

}

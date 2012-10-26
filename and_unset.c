#include<stdio.h>
int main()
{
int num1,pos1;
printf("enter number");
scanf("%d",&num1);
printf("enter pos to be offset");
scanf("%d",&pos1);
num1=num1&(~(1<<(pos1-1)));
printf("%d",num1);
return 0;

}

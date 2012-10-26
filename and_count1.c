#include<stdio.h>
int main()
{
int num1;
int count1=0;
printf("enter number");
scanf("%d",&num1);
while (num1!=0)
{
num1=num1 & (num1 - 1);
count1++;
}
printf("%d",count1++);
return 0;

}

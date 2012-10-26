#include<stdio.h>
int main()
{

int i;
int sum=0;
scanf("%d",&i);
int temp=i;
while (temp !=0)
{
sum =sum+(temp%10);
temp=temp/10;
}
printf("%d",sum);
}

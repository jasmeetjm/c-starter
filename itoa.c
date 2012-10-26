#include<stdio.h>
int main()
{
int sum;
printf("\nenter");
scanf("%d",&sum);
char a[32];
int c=printf("%d\n",sum);
printf("%d\n",c);
int index=c;
a[index]='\0';
while((index-1)>0)
{
a[index-1]=(sum%10)+'0';
sum=sum/10;
index--;
}
printf("\t%s\n\n",a);
}

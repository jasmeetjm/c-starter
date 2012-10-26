#include<stdio.h>
int main()
{
char a[32];
char b[32];
printf("enter 1st string\n");
scanf("%s",a);
printf("enter 2nd string");
scanf("%s",b);
int index=0;
int index1=0;
while(a[index]!='\0')
{
index++;
}
while(b[index1]!='\0')
{
a[index+index1]=b[index1];
index1++;
}
a[index+index1]='\0';
printf("\t%s\n",a);
}



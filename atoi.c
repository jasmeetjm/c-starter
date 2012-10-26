#include<stdio.h>
int main()
{
char a[32];
printf("enter");
scanf("%s",a);
int index=0;
int sum=0;
while (a[index]!='\0')
{
sum=(sum*10)+(a[index]-'\0');
index++;
}
printf("%d",sum);
return 0;
}


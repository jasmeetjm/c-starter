#include<stdio.h>

int main()
{	
int i;
	char a[32];
  printf("enter string to reverse");
scanf("%s",a);
 int len=0;
  while(a[len]!=0)
{
len++;
}
for(i=0;i<(len-1)/2;i++)
{
a[i]=a[i]^a[len-1-i];

a[len-1-i]=a[i]^a[len-1-i];
a[i]=a[i]^a[len-1-i];
}
printf("%s\n",a);
}

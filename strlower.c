#include<stdio.h>
int main()
{
 char a[32];
  printf("enter string");
scanf("%s",a);
	int index=0;
while(a[index]!='\0')
{
if(a[index]>='A' && a[index]<='Z')
{
a[index]=a[index]+('a'-'A');
}
index++;

}
printf("%s\n",a);

}

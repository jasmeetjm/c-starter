#include<stdio.h>
int main()
{
char a[32];
char b[32];
 printf("enter string\n");
scanf("%s",a);
printf("enter the substring you want to search\n");
scanf("%s",b);
	int index=0;
while(a[index]!='\0')
{
if (a[index]==b[0])
{
int index1=1;
while(b[index1]!='\0')
{
if(a[index+index1]!=b[index1])
{
break;
}
index1++;
}
if(b[index1]=='\0')
{
printf("found the substring %s at location %d\n",b,index);
//return index;
}
}
index++;
}
return 1;

}

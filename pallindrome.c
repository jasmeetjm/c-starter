#include<stdio.h>

int main()
{
int i;
char a[32];
printf("enter string to check pallindrome");
scanf("%s",a);
int index=printf("%s",a);
while(a[index]!='\0')
{
index++;
}

for(i=0;i<(index-1)/2;i++)
{
if (a[i]!=a[index-1-i])
{
printf("not a pallindrome");
return 1;
}
}
printf(" %s is a pallindrome",a);

}

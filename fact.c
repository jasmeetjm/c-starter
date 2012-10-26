#include<stdio.h>
int fact(int num)
{
if(num==1)
{
return 1;
}
int facto=num*(fact(num-1));
return facto;
}



int main()
{
//int n;
//scanf("%d",&n);
//unsigned int c=fact(n);
// printf("%d",c);
fact(10000000000);
printf("%d",fact(10000000000));
}

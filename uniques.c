#include<stdio.h>
int main()
{
int a[9]={1,1,1,4,6,3,9,3,6};
int i;
int num=0;
for(i=0;i<9;++i)
{
num=num^a[i];

}
printf("%d",num);
return 0;

}

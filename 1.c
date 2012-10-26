#include<stdio.h>
int num1,num2;
int main()

{
int i,j;
static int k,l;
if(&j>&i)
{
printf("stack growing upwards\n");
}
else
{
printf("stack growing downwards\n");
}
if(&l>&k)
{
printf("grwing upwards\n");
}
else
{
printf("bss growing dwnwards\n");
}
if(&num2>&num1)
{
printf("ds growing upwards\n");

}
else
{
printf("growing downwards");
}
return 0;
}

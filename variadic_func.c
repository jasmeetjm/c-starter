#include<stdio.h>
#include<stdarg.h>


int add(int args,...)
{
int i;

int sum=0;
va_list a;
va_start(a,args);
for(i=0;i<args;i++)
{

sum=sum+va_arg(a, int);

}
va_end(a);
printf("%d\n", sum);
}
int main()
{
add(4,3,4,3,4);

}

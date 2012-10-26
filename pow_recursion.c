#include<stdio.h>
int pow1(long int num,long int exp)
{
if(exp==0)
{
return 1;
}
long int sum =num*(pow1(num,(exp-1)));

printf("\t%ld\n",sum);
return sum;

}
int main()
{
long int i,x;
printf("enter number");
scanf("%ld",&i);
printf("enter exponent");
scanf("%ld",&x);
pow1(i,x);
}


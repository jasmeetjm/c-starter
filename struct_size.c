#include<stdio.h>
struct a1
{
char a;
unsigned int b:4;
unsigned int e:32;
char c;

};

struct a2
{
unsigned int b:4;
char c;
char a;

};
struct a3
{
char a;
char c;

int b;
};
int main()
{
struct a1 j;

struct a2 k;
struct a3 l;
printf("a1%d\t a2 %d\t a3 %d\n",sizeof(j),sizeof(k),sizeof(l));
}

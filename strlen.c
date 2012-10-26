#include<stdio.h>
int main()
{
		char str[32];
	int index=0;
printf("enter string\n");
//fgets(str);
 scanf("%s",str);	
	while(str[index]!='\0')
{
	index++;
}
printf("\t%d\n",index);
}

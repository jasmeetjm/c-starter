#include<stdio.h>
int main()
{
	int index =0;
	// int index1=0;
	  char str[32];
	   char b[32];
  
  printf("enter string");
scanf("%s",str);


	while(str[index]!='\0')
{
 b[index]=str[index];
	index++;

}
b[index]='\0';

printf("%s\n",b);
}


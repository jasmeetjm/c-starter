#include<stdio.h>
int main()
{
int i=0,j=0;
int line=1;

int ui ;
 printf("enter lines");
 scanf("%d",&ui);
	
	while(line<=ui)
{
		i=0;	
	while(i<(ui-line))
	{
		printf(" ");
i++;

}

	j=0;
		while(j<((2*line)-1))
{
	printf("*");
j++;
}


printf("\n");
line++;
}

}


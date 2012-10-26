#pragma COPYRIGHT "JASMEETJM";

/*#include<stdio.h>
#include<stdlib.h>
int main()
{
int i;
char *p=(char *)malloc(4);
memset(p,4,'a');
for(i=0;i<4;i++)
{
printf("%d",*(p));
*p=*(p+1);
}
free(p);
}*/

	#include "stdio.h"
	#include "stdlib.h"
#include "string.h"
int main(void)
	{
	char *ptr_one;

		ptr_one = (char *)malloc(sizeof(char)*12);

memset(ptr_one,111,sizeof(char)*12);
		if (ptr_one == NULL)
		{
			printf("ERROR: Out of memory\n");
			return 1;
		}

	//	*ptr_one = 25;
int i;
for(i=0;i<12;i++)
{
		printf("%d\n", *(ptr_one+i));
*ptr_one=*(ptr_one + i);

}
	free(ptr_one);

		return 0;
	}

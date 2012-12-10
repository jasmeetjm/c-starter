#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fptr;
	char filename[]="2.txt";
	char ch;
	int count=0;
	fptr=fopen(filename,"r");
		
		if(fptr==NULL)
{
	fprintf(stderr,"NOTHING");
	exit(-1);	
	
}
	while((ch=fgetc(fptr))!=EOF)
{
		if(ch==10)
{
		count++;
}
		
}	
	fclose(fptr);
	fprintf(stdout,"%d",count);		
	
	return 0;
}

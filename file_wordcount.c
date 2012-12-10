#include<stdlib.h>
#include<stdio.h>
int main()
{		FILE *fptr,*fptr1;
		char filename[]="2.txt";
		fptr=fopen(filename,"r");
		char ch;
		fptr1=fopen(filename,"r");
		char ch1=' ';
		int count=0;
			
		if(fptr==NULL)
{
		fprintf(stderr,"NOTHING");
		exit(-1);
}
			
		while((ch=getc(fptr))!=EOF)
{
		if(ch == ' '|| ch == '\t' || ch == 10)
{
	if((ch1  >= 'a' && ch1 <='z') || (ch1 >= 'A' && ch1 <= 'Z') || (ch1 >='0' && ch1 <= '9'))
{
	printf("jasmeet\n");
	count++;
}
}
ch1=ch;

}
	fclose(fptr);
	fprintf(stdout,"%d",count);
}

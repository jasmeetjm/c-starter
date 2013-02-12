/*to count the number of lines */

#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fptr;		//declaring file pointer
	char filename[]="2.txt";	//declaring filename
	char ch;		
	int count=0;		//to count no. of lines
	fptr=fopen(filename,"r");	//opening file
	if(fptr==NULL) {		//if file not opened due to any reason
		fprintf(stderr,"NOTHING");
		exit(-1);	
	}
	while((ch=fgetc(fptr))!=EOF) {	//fetch char by char till eof
		if(ch=='\n') { //enever it enconter new line
			count++;
		}
	}	
	fclose(fptr);	//closinga file
	fprintf(stdout,"%d",count);		
	return 0;
}

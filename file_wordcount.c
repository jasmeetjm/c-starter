/*to count no. of words in a file */


#include<stdlib.h>
#include<stdio.h>
int main()
{
	FILE *fptr,*fptr1; //creating two file pointers
	char filename[]="2.txt";
	fptr=fopen(filename,"r");
	char ch;
	fptr1=fopen(filename,"r");
	char ch1=' ';
	int count=0;
	if(fptr==NULL) {	//if file not opened
		fprintf(stderr,"NOTHING");
		exit(-1);
	}
	while((ch=getc(fptr))!=EOF) {	//fetching char by char till eof
		if(ch == ' '|| ch == '\t' || ch == 10) { // when word finishes
			if((ch1  >= 'a' && ch1 <='z') || (ch1 >= 'A' && ch1 <= 'Z') || (ch1 >='0' && ch1 <= '9')) { //to check if a given entry is a word or not
				printf("jasmeet\n");
				count++;
			}
		}
		ch1=ch;
	}
	fclose(fptr);	//closing a file
	fprintf(stdout,"%d",count);
	return 0;
}

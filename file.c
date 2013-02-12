
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fptr,*fptr1;
	int a=7,b=8;
	char filename[]="2.txt";
	fptr=fopen(filename,"w");
	char ch;
	if(fptr==NULL) {
		fprintf(stderr,"error");
		exit(-1);
	}
	fprintf(stdout,"hello jasmeet\n");
	fprintf(fptr,"hello world\n");
	fprintf(fptr,"a:->%d b:->%d\n",a,b);
	printf("%d %d\n",a,b);
	fscanf(fptr,"%d%d",&a,&b);
	fscanf(stdin,"%d%d",&a,&b);
	fprintf(fptr,"%d\t%d\n",a,b);
	fprintf(stderr,"jasmeet has put an error\n");
	fclose(fptr);
	fptr=fopen(filename,"r");
	while((ch=getc(fptr))!=EOF) {
		printf("%c",ch);
	}
	fclose(fptr);
	fptr=fopen(filename,"r");
	fptr1=fopen("1.txt","a");
	while((ch=getc(fptr))!=EOF)
		fprintf(fptr1,"%c",ch);
	
	fclose(fptr);
	fclose(fptr1);
	return 0;
}

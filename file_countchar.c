#include<stdio.h>
#include<stdlib.h>
int main()
{
int count=0;
char ch;
FILE *fptr;
char filename[]="k.txt";
fptr=fopen(filename,"r");
if(fptr==NULL)
{
fprintf(stderr,"NOTHING");
exit(-1);
}
while ((ch=getc(fptr))!=EOF)
{
printf("%c",ch);
count++; 
fprintf(stdout,"%c",ch);
}
count--;
fprintf(stdout,"%d",count);
fclose(fptr);
return 0;

}

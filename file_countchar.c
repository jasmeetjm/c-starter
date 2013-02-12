/* to count the no. of characters in a file */

#include<stdio.h>
#include<stdlib.h>
int main()
{
  int count=0;  //variable to count no. of characters
  char ch;      //variable to store char  
  FILE *fptr;   //file pointer
  char filename[]="k.txt";  // filename declare
  fptr=fopen(filename,"r"); //opening the file
  if(fptr==NULL) {          //if file is not opened
    fprintf(stderr,"NOTHING");
    exit(-1);
  }
  while ((ch=getc(fptr))!=EOF) {  //till end of file is achieved
    printf("%c",ch);              // print every character by character till eof
    count++;                      //counting no. of characters
    fprintf(stdout,"%c",ch);
  }
  count--;                        
  fprintf(stdout,"%d",count);
  fclose(fptr);
  return 0;
}

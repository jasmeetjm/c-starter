/* to draw chessboard in linux bash shell using esc character */

#include<stdio.h>
int main()
{
  int i=0;
  int j=0;
  while (i<8) {
    if(i%2==0) {        //to draw alternate combination in an even lines
      for(j=0;j<4;j++) {    
        printf("%c[47m ",27); //esc sequence to draw white 
        printf("%c[40m ",27); //esc sequence to draw black
      }
    }
    else {              //to draw alternate combinations in odd lines
      for(j=0;j<4;j++) {
        printf("%c[40m ",27); //esc sequence to draw black 
        printf("%c[47m ",27);//esc sequence to draw white 
      }
    }
    printf("\n");
    i++;
  }
  return 0;
}

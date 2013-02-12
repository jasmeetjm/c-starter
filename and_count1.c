/* to Count no. of one's in the given integer in bits representation. */

#include<stdio.h>
int main()
{
  int num1,     //variable to take integer
      count1=0; //variable to count no. of one's
  printf("enter number");
  scanf("%d",&num1);  //take input from user
  while (num1!=0) {   //till all one's are counted
    num1=num1 & (num1 - 1); // this reduce no. of one's in a number one less than before
    count1++;               //counting everytime it works
  }
  fprintf(stdout,"%d",count1++);  //tells the output
  return 0;
}

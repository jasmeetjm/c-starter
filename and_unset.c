/* to set some bit off*/

#include<stdio.h>
int main()
{
  int num1, //local variable for a number
      pos1; //variable for the bit we need to unset
  printf("enter number");
  scanf("%d",&num1); // take input of integer from user
  printf("enter pos to be offset");
  scanf("%d",&pos1); //take position for unsetting by user
  num1=num1&(~(1<<(pos1-1))); //to do and operation with that bit of an integer
  printf("%d",num1);
  return 0;

}

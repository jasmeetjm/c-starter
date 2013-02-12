/* tO CHECK how data are stored in memory model*/
  
#include<stdio.h>
int num1,    //global variable num1
    num2;   //global variable num2
int main()
{
  int i,   //local variable 1
      j;  //local variable 2
  static int k, //static local variable 1
             l; //static local variable 2
  if(&j<&i)                               //local variables are stored in stack
    printf("stack growing upwards\n");    //checking where local variables are stored in stack
  else
    printf("stack growing downwards\n");
  if(&l<&k)                             //static variables not initialized to any to any non zero no. are stored in bss
    printf("bss grwing upwards\n");   //comparison of stack variables,how they are stored in stack
  else
    printf("bss growing downwards\n");  
  if(&num2<&num1)                       //global variables not initialized to 0 are stored in data segment
    printf("ds growing upwards\n");     //similarily checking how global variables are stored in ds.
  else
    printf("ds growing downwards");
  return 0;
}

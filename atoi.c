/*to convert ascii into integers */

#include<stdio.h>
int main()
{
  char str[32];       //variable to enter any string
  printf("enter");  
  scanf("%s",str);
  int index=0,      //varable to point to array
      sum=0;      //to calculate it's value into integers
  while (str[index]!='\0') {  
    sum=(sum*10)+(str[index]-'\0');
    index++;
  }
  printf("%d",sum);
  return 0;
}


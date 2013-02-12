/*to find given no. is armstrong or not*/

#include<stdio.h>
#include<math.h>
int main()
{
 int i;  //variable for an input
 scanf("%d",&i); //user input
 int count=0; //to count no. of digits
 int temp=i; // temp is variable where we store given input
/*while(temp!=0)
{
temp=temp/10;
count++;
}
*/
 count=printf("%d",temp); //count no. of digits in a given input
//        count = log(temp) + 1;
 int sum=0;    //sum variable to check if a given no. gives desired result
 while(temp!=0) {
  sum=sum + pow((temp%10),count); //formula to check 
  temp=temp/10;
 }
 if(sum == i) 
  printf("%d is an armstrong no\n",i);
 else
  printf("%d is not an armstrong number\n",i);
  }
  return 0;
}

/*to check if given no. is armstrong number or not */

#include<iostream>
#include<math.h>
using namespace std;
bool armstrong(int num) //bool function which return if a given is true of false
{
  int num1=num,
      count=0,  //variable to count no. of digits in an integer
      sum=0;    //variable to calculate te sum of it's powers
  while (num1!=0) { //to calculate no. of digits
    num1=num1/10;
    ++count;
  }
  num1=num;   
  while (num1!=0) {   //to calculate sum of their powers
    sum+=pow((num1%10),count);
    num1=num1/10;
  }
  if (sum==num)   //if an armstrong number will return true to the main
    return true;
  else 
    return false;
}  

int main()
{
  int num;  //variable for an integer 
  cin>>num; //user input 
  if (armstrong(num)) { //function calling
    cout<<"no. is armstrong"<<endl; //if return true
    return 0;
  }
  cout<<"number is not armstrong "<<endl; //if return is false
  return 0;
}

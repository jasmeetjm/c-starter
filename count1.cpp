/*to count no. of 1's in bits representation of an integer */

#include<iostream>
using namespace std;
  int count1(int num) {
  int count=0;        //local variable used to count no. of ones
  while (num!=0)  {
    num=num&num-1;  //to count no. of ones till all are counted
    count++;
  }
  return count;
}

int main()
{
  int num;  //variable
  cin>>num; //user input
  cout<<"the number of 1's are"<<count1(num)<<endl;
  return 0;
}

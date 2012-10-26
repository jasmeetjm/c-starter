
#include<iostream>
#include<math.h>
using namespace std;
bool armstrong(int num)
{
int num1=num;
int count=0;
int sum=0;
while (num1!=0)
{
num1=num1/10;
++count;
}
num1=num;
while (num1!=0)
{

sum+=pow((num1%10),count);
num1=num1/10;
}
if (sum==num)
{
return true;
}
else 
return false;
}
int main()
{
int num;
cin>>num;
if (armstrong(num))
{
cout<<"no. is armstrong"<<endl;
return 0;
}
cout<<"number is not armstrong "<<endl;
return 0;
}

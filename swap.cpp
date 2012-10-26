#include<iostream>
using namespace std;
void swap(int num1,int num2)
{
num1^=num2;
num2^=num1;
num1^=num2;
cout<<num1<<endl<<num2<<endl;

}
int main()
{
int num1,num2;
cin>>num1>>num2;
swap(num1,num2);
//cout<<swap(num1,num2)<<endl;

return 0;

}


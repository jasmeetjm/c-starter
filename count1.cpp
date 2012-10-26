#include<iostream>
using namespace std;
int count=0;
int count1(int num)
{

while (num!=0) 
{
num=num&num-1;
count++;
}
return count;
}
int main()
{
int num;
cin>>num;
cout<<"the number of 1's are"<<count1(num)<<endl;
return 0;
}

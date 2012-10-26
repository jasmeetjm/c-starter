#include<iostream>
using namespace std;
int unset(int num,int pos)
{
return num&(~(1<<pos-1));
}
int main()
{
int num,pos;
cin>>num>>pos;
cout<<"the number is "<<unset(num,pos)<<endl;
return 0;
}

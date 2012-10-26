#include<iostream>
using namespace std;
int setbit(int num,int pos)
{
return num|1<<(pos-1);
}
int main()
{
int num,pos;
cin>>num>>pos;
cout<<"the number is"<<setbit(num,pos)<<endl;
return 0;
}

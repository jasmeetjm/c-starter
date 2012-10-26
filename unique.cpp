
#include<iostream>
using namespace std;
int main()
{
int a[9]={1,2,3,1,2,4,5,4,3};
int num=0;
int i;
for(i=0;i<9;i++)
{
num^=a[i];
}
cout<<num;
}

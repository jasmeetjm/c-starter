#include<iostream>
using namespace std;
int main()
{
int a=2,b=3,c;
c= ++a||++b;
cout<<a<<endl<<b<<endl<<c<<endl;
int d=1,e=2,f;
f= --d&&--e;
cout<<d<<endl<<e<<endl<<f<<endl;
return 0;
}

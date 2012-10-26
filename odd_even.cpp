#include<iostream>
using namespace std;
bool check(int num)
{
if (!(num & 1))
{
return true;
}
return false;
}

int main()
{
int num;
cin>>num;
if(check(num) == true)
{
cout<<"EVEN"<<endl;
return 0;
}
cout<<"ODD"<<endl;
return 0;
}


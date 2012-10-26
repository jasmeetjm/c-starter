#include<iostream>
using namespace std;
bool pow_of_2(int num)
{
if(num && !(num & (num-1)))
{
return true;
}
return false;
}


int main()
{
int num;
cin>>num;
if (pow_of_2(num) == true)
{
cout<<"power of 2"<<endl;
return 0;
}
cout<<"not a power of 2"<<endl;
return 0;

}

#include<iostream>
using namespace std;
class Rectangle
{
private:
int len,breadth;
public:
int set_len(int l1)
{
len = l1;
}
int set_breadth(int b1)
{
breadth = b1;
}
void area()
{
int area= len * breadth;
cout<<"area"<<area<<endl;
}
void perimeter()
{
int per= (len + breadth)<<1 ;
cout<<"perimeter"<<per<<endl ;
}
};
int main()
{
Rectangle r1;
r1.set_len(10);

Rectangle r2;
r2.set_len(20);

r1.set_breadth(13);
r2.set_breadth(26);

r1.area();
r2.area();

r1.perimeter();
r2.perimeter();

return 0;
}


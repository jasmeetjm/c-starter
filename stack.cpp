	
	#include<iostream>
	#define stack_size 100	
	using namespace std;
	class Stack
{
	
  private:
    int arr[stack_size];
     int top;
   bool stack_full()
{
    if(arr[top] != stack_size-1)
{
    return 0;	
}
    return 1;
}
  bool stack_empty()
{
    if(top == -1)
{ 
    return 1;
}
    return 0;
}
    public:
        Stack()
{
	top=-1;
} 
     int push(int num)
{
	if(!stack_full())
{
	++top;
	arr[top]=num;
	return arr[top];
}
     else 
{

   // cout<<"STACK IS FULL"<<endl;
	return 1;
}
}
     int pop()
{
	if(!stack_empty())
{
      int temp=arr[top];
       --top;
	return temp;
}
else
{
	
    cout<<"STACK IS EMPTY"<<endl;
	return 1;
}
}
	void display()
{
	int i;
	for(i=top;i>=0;--i)
{
	cout<<arr[i]<<endl;
}
}
};
	int main()
{
	Stack *stk=new Stack;
	int i;
	for(i=0;i<10;i++)
{
	int n;
	cin>>n;
	stk->push(n);

}
	cout<<stk->pop()<<endl;
	stk->display();
	delete stk;

	return 0;
}

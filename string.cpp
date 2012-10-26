#include<iostream>
using namespace std;
class String
{
private:

char str1[32];
char str2[32];
public:
void enter_str()
{
cin>>str1;
cin>>str2;
}
void str_append()
{
int index=0;
while(str1[index]!='\0')
{
index++;
}
int index1=0;
while(str2[index1]!='\0')
{
str1[index+index1]=str2[index1];
index1++;
}
str1[index+index1]='\0';
cout<<str1<<endl;
}
void str_len()
{
int index=0;
while(str1[index]!='\0')
{
index++;
}
cout<<index<<endl;
}
void str_rev()
{
int index=0;
while(str1[index]!='\0')
{
index++;
}
for(int i=0;i<=(index/2);i++)
{
str1[i]=str1[i]^str1[index-1-i];
str1[index-1-i]=str1[i]^str1[index-1-i];
str1[i]=str1[i]^str1[index-1-i];
}
cout<<str1<<endl; 
}
void str_upper()
{
int index=0;
while(str1[index] != '\0')
{
if (str1[index]>= 'a' && str1[index]<= 'z')
{
str1[index]=str1[index]-('a'-'A');
}
index++;
}

cout<<str1<<endl;
}
void str_lower()
{
int index=0;
while(str1[index]!='\0')
{
if(str1[index]>='A' && str1[index]<='Z')
{
str1[index]=str1[index]+('a'-'A');
}
index++;
}
cout<<str1<<endl;
}

};
int main()
{
String str;
str.enter_str();

str.str_len();
str.str_append();
str.str_upper();
str.str_rev();
str.str_lower();
str.str_rev();
return 0;

}

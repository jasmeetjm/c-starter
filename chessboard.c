#include<stdio.h>
int main()
{
int i=0;
int j=0;
while (i<8)
{
if(i%2==0)
{
for(j=0;j<4;j++)
{
printf("%c[47m ",27);
printf("%c[40m ",27);

}


}
else
{
for(j=0;j<4;j++)
{
printf("%c[40m ",27);
printf("%c[47m ",27);


}
}
printf("\n");


i++;

}
return 0;
}

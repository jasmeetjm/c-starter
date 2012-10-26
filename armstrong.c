#include<stdio.h>

#include<math.h>
int main()
{



int i;
int counter=0;
for(i=0;i<100000000;i++)
{
//scanf("%d",&i);
int count=0;
 int temp=i;
/*while(temp!=0)
{
temp=temp/10;
count++;
}
*/

//count=printf("%d",temp);
count = log(temp)+1;

int sum=0;
while(temp!=0)
{

sum=sum + pow((temp%10),count);
temp=temp/10;
}

/*if(sum == i)
{
printf("%d is an armstrong no\n",i);
//scounter++;

}
else
{
printf("");
//printf("%d is not an armstrong number\n",i);
}*/
do
{printf("%d is an armstrong number",i);
}
while(sum==i);
/*if(sum ==i)
{
counter++;
}

else
{
bounter ++;
}
}
printf("NO. OF ARMSTRONG NUMBER IN 0-100000 IS %d",counter);
printf("NO. OF non ARMSTRONG NUMBER IN 0-100000 IS %d",bounter);
*/
//}
//printf("\t %d no. of armstrong no.",counter);

}
}

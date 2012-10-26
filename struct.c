#include<stdio.h>
#include"string.h"


struct students  
{
unsigned int student_id;
char name[20];
};
int main()

{
struct students s[10];
int i;
for(i=0;i<10;i++)
{
printf("\n enter student id of %d",i);
scanf("%d",&s[i].student_id);

printf("\n enter studenti name of %d ",i);

scanf("%s",s[i].name);
}
//strcpy(s.name,"hello");
for(i=0;i<10;i++)
{
printf("\t%s",s[i].name);
printf("\t%d\n",s[i].student_id);
}
printf("\n the size of strct is %d",sizeof(s[10]));
}

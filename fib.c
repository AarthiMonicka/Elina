#include<stdio.h>
int main()
{
int num,first=1,second=1,next,c;
printf("Enter the value:");
scanf("%d",&num);
for(c=0;c<num;c++)
{
if(c<=1)
{
next=c;
}
else
{
next=first+second;
first=second;
second=next;
}
printf("%d",&next);
}
return 0;
}

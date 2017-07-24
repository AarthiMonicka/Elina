#include<stdio.h>
int main()
{
int val,exp,c,res=0;
printf("Enter the values:");
scanf("%d\t%d",val,exp);
for(c=0;c<exp;c++)
{
res=res*val;
}
printf("the result is:%d",res);
return 0;
}

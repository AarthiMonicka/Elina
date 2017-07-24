#include<stdio.h>
int main()
{
int val,exp,c,res=1;
printf("Enter the values:");
scanf("%d%d",&val,&exp);
for(c=0;c<exp;c++)
{
res=res*val;
}
printf("\nthe result is:%d",res);
return 0;
}

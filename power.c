#include<stdio.h>
#include<conio.h>
int main()
{
int val,exp,c,res=0,s;
printf("Enter the values:");
scanf("%d%d",&val,&exp);
for(c=0;c<=exp;c++)
{
res=res*val;
}
printf("\nthe result is:%d",res);
getch();
return 0;
}

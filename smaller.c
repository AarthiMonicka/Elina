#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("enter values:");
scanf("%d\t%d\t%d",&a,&b,&c);
if(a>b && a>c)
printf("a is larger",a);
elseif(b>a && b>c)
printf("b is larger",b);
else
printf("c is larger",c);
return 0;
}

#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("enter values:");
scanf("%d %d %d",&a,&b,&c);
if(a>b && a>c)
printf("a is larger",a);
else if(b>a && b>c)
printf("b is larger",b);
else
printf("c is larger",c);
return 0;
}

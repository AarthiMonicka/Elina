#include<stdio.h>
int main()
{
int a,b,c;
printf("enter values:");
scanf("%d %d %d",&a,&b,&c);
if(a>b && a>c)
printf("a is larger",a);
elseif(b>a && b>c)
printf("b is larger",b);
else
printf("c is larger",c);
return 0;
}

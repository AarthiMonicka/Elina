#include<stdio.h>
int main()
{
char r;
int low,up;
printf("character");
scanf("%c",&r);
low=(r==a||r==e||r==i||r==o||r==u);
up=(r==A||r==E||r==I||r==O||r==U);
if(low||up)
printf("vowel");
else
printf("consonent");
return 0;
}

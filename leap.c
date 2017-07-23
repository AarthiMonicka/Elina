#include<stdio.h>
int main()
{
int n;
printf("Enter the year");
scanf("%d",&n);
if((n%400)==0)
ptintf("leap year");
elseif((n%100)==0)
ptintf("not a leap year");
elseif((n%4)==0)
printf("leap year");
else
printf("not a leap year");
}

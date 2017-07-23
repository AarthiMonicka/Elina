#include<stdio.h>
#include<conio.h>
int main()
{
int n;
printf("Enter the year");
scanf("%d",&n);
if((n%400)==0)
printf("leap year");
elseif((n%100)==0)
printf("not a leap year");
elseif((n%4)==0)
printf("leap year");
else
printf("not a leap year");
}

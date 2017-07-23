#include<stdio.h>
int main()
{
int n,count=0;
printf("Enter the values:");
scanf("%d",&n);
while(n)
{
n=n/10;
count++;
}
printf("the number of digits:",count);
return 0;
}

#include <stdio.h>
void main()
{
int n,i,a=0;
printf("enter the number");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
if(n%i==0)
{
a++;
}
if(a==3)
{
printf("prime number");
}
else
{
printf("not a prime number");
}
}
}

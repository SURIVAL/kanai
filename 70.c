#include<stdio.h>
void main()
{
int a,b,c,d,i,n;
printf("enter a number");
scanf("%d",&a);
for(i=0;i<n;i++)
{
b=pow(2,i);
if(b>a)
{
c=i;
d=pow(2,c);
printf("\n%d",d);
break;
}
}
}



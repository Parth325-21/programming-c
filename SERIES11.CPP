#include<math.h>
#include<stdio.h>
void main()
{
int n,i,sum=0,x=0;
printf("enter the value of n");
scanf("%d",& n);
for(i=1;i<=n;i++)
{
sum=sum+pow(10,x);
printf("%d ",sum);
x=x+1;
}
}
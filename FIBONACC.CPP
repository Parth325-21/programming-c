#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,b=1,c=0,n,i;
printf("enter the value of n");
scanf("%d",& n);
if(n==1)
{
printf("%d",a);
}
else if(n==2)
{
printf("%d%d",a,b);
}
else
{
printf("%d%d",a,b);
}
for(i=3;i<=n;i++)
{
c=a+b;
printf("%d ",c);
a=b;b=c;
getch();
}
}
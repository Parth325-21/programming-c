#include<stdio.h>
#include<conio.h>
void main()
{
inti,n,sum=0,x=0;
clrscr();
printf("enter the value of n");
scanf("%d",& n);
for(i=1;i<=n;i++)
{
sum=sum*10+i;
printf("%d",sum);
getch();
}
}
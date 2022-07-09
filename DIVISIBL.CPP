#include<stdio.h>
#include<conio.h>
void main()
{
int i,sum=0;
clrscr();
for(i=0;i<=50;i+=5)
{
sum=sum+i;
}
printf("sum=%d",sum);
getch();
}
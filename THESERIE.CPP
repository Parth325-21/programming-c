#include<stdio.h>
#include<conio.h>
void main()
{
int i,sum=0;
for(i=2;i<=100;i+=2)
{
sum=sum+i*i;
}
printf("%d ",sum);
getch();
}
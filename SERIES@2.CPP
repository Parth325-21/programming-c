#include<stdio.h>
#include<conio.h>
void main()
{
int a=2,b=5,i,n;float sum=0;
clrscr();
printf("enter the value of n");
scanf("%d",& n);
for(i=1;i<=n;i++)
{
sum=sum+a/b;
a+=3;
b+=4;
}
printf("%f",sum);
getch();
}
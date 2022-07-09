#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,num,l,s;
clrscr();
printf("enter the n");
scanf("%d",&n);
printf("enter the number");
scanf("%d",& num);
l=s=num;
for(i=2;i<=n;i++)
{
scanf("%d",& num);
if(num>l)
l=num;
if(num<s)
s=num;
}
printf("largest number %d smallest number %d",l,s);
getch();
}
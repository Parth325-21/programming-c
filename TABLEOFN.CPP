#include<stdio.h>
#include<conio.h>
void main()
{
int num,i;
clrscr();
printf("enter the number");
scanf("%d",& num);
for(i=0;i<=50;i+=5)
{
printf("%d/t",num*i);
getch();
}
}
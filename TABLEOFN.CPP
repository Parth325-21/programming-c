#include<stdio.h>
#include<conio.h>
void main()
{
int num,i;
clrscr();
printf("enter the number");
scanf("%d",&num);
for(i=1;i<11;i++)
{
printf("%d\t",num*i);

}
getch();
}
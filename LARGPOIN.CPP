#include<stdio.h>
#include<conio.h>
int largest(int *n1,int *n2)
{
if(*n1>*n2)
{
return *n1;
}
else if(*n2>*n1)
{
return *n2;
}
}
void main()
{
int *a,*b,l;
printf("enter the number of a& b");
scanf("%d%d",&*a,&*b);
l=largest(*a,*b);
printf("largest number%d",l);
getch();
}
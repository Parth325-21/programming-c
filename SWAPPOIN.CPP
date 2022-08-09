#include<stdio.h>
#include<conio.h>
void swap(int *a,int *b)
{
int temp=*a;
*a= *b;
*b=temp;
}
void main()
{
int x1,y1;
printf("enter the value of x1& y1");
scanf("%d%d",&x1,&y1);
swap(&x1,&y1);
printf("%d%d",x1,y1);
}
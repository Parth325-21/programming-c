#include<stdio.h>
#include<conio.h>
int clargestnumber(int n1,int n2)
{
if(n1>n2)
{
return n1;
}
else
{
return n2;
}
}
void main()
{
int n1,n2,l1;
printf("enter the value of n1 & n2");
scanf("%d%d",&n1,&n2);
l1=clargestnumber(n1,n2);
printf("the largest number%d",l1);
}
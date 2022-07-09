#include<stdio.h>
#include<conio.h>
void main()
{
float aveg,sum=0;int i;
for(i=0;i<=15;i+=1)
{
sum=sum+i;
aveg=sum/5;
}
printf("the value of sum& aveg %f%f",sum,aveg);
getch();
}
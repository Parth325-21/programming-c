#include<stdio.h>
#include<conio.h>
float cinterest (float p1,float r1,float t1)
{
float SI;
SI=(p1*r1*t1)/100;
return SI;
}
void main()
{
float p,r,t,SI1;
printf("enter the value of p,r,t");
scanf("%f%f%f",&p,&r,& rt);
SI1=cinterest(p,r,t);
printf("simple interest%f",SI1);
}
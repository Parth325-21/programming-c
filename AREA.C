#include<stdio.h>
#include<conio.h>
void main()
{
int choice,n,s;float l,b,r,A;
clrscr();
printf("enter the value of choice");
scanf("%f",&n);
switch(choice)
{
case 1:
printf("enter the value of l & b");
scanf("%f%f", & l,&b);
A = l*b;
printf("Area of rectangle %f" ,A);
break;
case 2:
printf("enter the value of s");
scanf("%f",& s);
A= s*s;
printf("Area of square %f",A);
break;
case 3:
printf("enter the value of radius");
scanf("%f",& r);
A=3.14*r*r;
printf("Area of circlr %f" ,A);
break;
default:
printf("choice is not fount");
break;
}
}
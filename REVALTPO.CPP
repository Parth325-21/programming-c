//prg to reverse frst half with second half of the given array
//1 2 3 4 5 6-- 4 5 6 1 2 3
#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{
clrscr();
int ar[6],i,j,temp;
cout<<"enter the array ";
for(i=0;i<6;i++)
{
cin>>ar[i];
}
j=3;
for(i=0;i<3;i++,j++)
{
temp=ar[i];
ar[i]=ar[j];
ar[j]=temp;
}
cout<<"revers of the array "<<endl;
for(i=0;i<6;i++)
{
cout<<ar[i]<<" ";
}
getch();
}


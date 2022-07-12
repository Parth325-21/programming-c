//prg to find the reverse of the given array.
#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{
clrscr();
int ar[10],i,j,temp;
cout<<"enter the array ";
for(i=0;i<10;i++)
{
cin>>ar[i];
}
j=9;
for(i=0;i<5;i++,j--)
{
temp=ar[i];
ar[i]=ar[j];
ar[j]=temp;
}
cout<<"revers of the array "<<endl;
for(i=0;i<10;i++)
{
cout<<ar[i]<<" ";
}
getch();
}


#include<iostream.h>
#include<conio.h>
//wAP to find the frequency of a given number in an array of n interger
void main()
{
clrscr();
int N[100],i,n,x,count=0;
cout<<"enter the size of the array ";
cin>>n;
cout<<"enter the array ";
for(i=0;i<n;i++)
{
cin>>N[i];
}
cout<<"enter the number ";
cin>>x;
for(i=0;i<n;i++)
{
if(N[i]==x)
{
count++;
}
}
cout<<"frequency of the number is "<<count;
getch();
}
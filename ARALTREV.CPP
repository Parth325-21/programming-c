//wap to replace each even number with it half and odd number with its twice stored in an array of an interger
#include<iostream.h>
#include<conio.h>
void change(int *,int);
void main()
{
clrscr();
int N[100],i,n;
cout<<"enter the size of an array";
cin>>n;
cout<<"enter the array ";
for(i=0;i<n;i++)
{
cin>>N[i];
}
change(N,n);
for(i=0;i<n;i++)
{
cout<<N[i]<<" ";
}
}
void change(int N[],int n1)
{
int i;
for(i=0;i<n1;i++)
{
if(N[i]%2==0)
{
N[i]=N[i]/2;
}
else
{
N[i]=2*N[i];
}
}
getch();
}

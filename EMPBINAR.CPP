#include<stdio.h>
#include<conio.h>
#include<fstream.h>
void main()
{
clrscr();
int i;char ch;
ofstream fout;
fout.open("emp.dat",ios::out|ios::binary);
struct employe
{
int salary,number;
char name[30];
}E;
for(i=1;i<=2;i++)
{
printf("enter the employe number,salary,name");
scanf("%d%d",&E.number,&E.salary);
ch=getchar();
gets(E.name);
fout.write((char*)&E,sizeof(E));
}
fout.close();
getch();
}

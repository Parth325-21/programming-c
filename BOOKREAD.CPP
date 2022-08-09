#include<stdio.h>
#include<conio.h>
#include<fstream.h>
void main()
{
clrscr();
ifstream fin;
fin.open("Book.data",ios::in);
char BId[20],subject[30],author[30];
int prize,qty;
for(int i=1;i<=2;i++)
{
fin>>BId>>subject>>author>>qty>>prize;
printf("%s %s %s %d %d ",BId,subject,author,qty,prize);
}
fin.close();
getch();
}



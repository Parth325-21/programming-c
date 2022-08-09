#include<stdio.h>
#include<conio.h>
#include<fstream.h>
void main()
{
char ch;int i;
fstream fin;
//fout1.open("upper.text",ios::out);
fin.open("Upper.text",ios::in);
while(!fin.eof())
{
fin.get(ch);
printf("%c ",ch);
}
fin.close();
getch();
}



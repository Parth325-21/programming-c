#include<stdio.h>
#include<conio.h>
#include<fstream.h>
void main()
{
int choice=1;
printf("enter the choice");
scanf("%d",&choice);
ofstream fout;
fout.open("flight.dat",ios::out|ios::binary);
struct flight
{
int flightnumber,Amount;
char origion[50],destination[50];
}F;
while(choice!=0)
{
printf("enter the flightnumber,Amount,origion,destination");
scanf("%d %d",&F.flightnumber,&F.Amount);
char ch;
ch=getchar();
gets(F.origion);
gets(F.destination);
fout.write((char*)&F,sizeof(F));
printf("Do you want to count 0 to exit");
scanf("%d",&choice);
}
fout.close();
}
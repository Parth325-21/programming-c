#include<stdio.h>
#include<conio.h>
void character(char *str)
{
int lcount=0,ucount=0;
while(*str!='\0')
{
if(*str>='A'&& *str<='Z')
{
ucount++;
}
else if(*str>='a'&&*str<='z')
{
lcount++;
}
str++;
}
printf("lower case %d",lcount);
printf("upper case %d",ucount);
}
void main()
{
char *s1;
printf("enter the string");
gets(s1);
character(s1);
getch();
}






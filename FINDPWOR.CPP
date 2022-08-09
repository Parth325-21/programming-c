#include<stdio.h>
#include<conio.h>
void words(char *str)
{
int i,count=0;
while(*str!='\0')
{
if(*str==','||*str=='.'||*str==' ')
{
count++;
}
printf("the number of words%d",count);
}
void main()
{
char *str1,count1;
printf("enter the string");
scanf("%c",&str1);
word(*str1);
getch();
}

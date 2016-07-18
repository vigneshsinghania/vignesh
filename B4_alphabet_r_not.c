#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
scanf("%c",&ch);
if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
{
printf("it is an alphabet");
}
else
{
printf("it is not an alphabet");
}
getch();
}

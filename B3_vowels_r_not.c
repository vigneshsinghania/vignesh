#include<stdio.h>
#include<conio.h>
void main()
{
char a;
clrscr();
scanf("%s",&a);
if(a=='a'||a=='A'||a=='e'||a=='E'||a=='i'||a=='I'||a=='o'||a=='O'||a=='u'||a=='U')
printf("\nvowel");
else
printf("\nnot vowel");
getch();
}

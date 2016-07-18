#include<iostream.h>
#include<conio.h>
void main()
{
int year;
cin>>year;
if(((year%4==0) && (year!=100) || (year%400==0)))
{
cout<<"it is a leap year";
}
else
{
cout<<"it is not a leap year";
}
getch();
}

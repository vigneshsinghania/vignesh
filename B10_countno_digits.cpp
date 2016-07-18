#include<iostream.h>
#include<conio.h>
int main()
{
long n;
int count=0;
clrscr();
cin>>n;
while(n!=0)
{
n=n/10;
count++;
}
cout<<count;
return 0;
}

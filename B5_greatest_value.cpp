#include<iostream.h>
#include<conio.h>
int main()
{
int a,b,c;
clrscr();
cin>>a>>b>>c;
if((a>b)&&(a>c))
{
cout<<a<<" is greatest";
}
else if((b>a)&&(b>c))
{
cout<<b<<" is greatest";
}
else
{
cout<<c<<"is greatest";
}
return 0;
}

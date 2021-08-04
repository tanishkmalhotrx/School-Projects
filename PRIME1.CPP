//prime number
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a,i;
cout<<"\n\nEnter a number:";
cin>>a;      //a=8
for(i=2;i<=a/2;i++)
{
if(a%i==0)
{
cout<<"\n\nNumber is not prime";
goto l;
}
}
cout<<"\n\nNumber is prime";
l:getch();
}
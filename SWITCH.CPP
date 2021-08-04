#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
float a,b,c;
int ch;
char ch1;
do
{
clrscr();
cout<<"\n\nEnter your choice:";
cin>>ch;
switch(ch)
{
case 1:cout<<"\n\nEnter the radius:";
cin>>a;
c=3.14*a*a;
cout<<"\n\nArea of the circle is:"<<c;
break;
case 2:
cout<<"\n\nEnter base and height:";
cin>>a>>b;
c=0.5*a*b;
cout<<"\n\nArea of the triangle is:"<<c;
break;
default:cout<<"\n\nSoory..wrong choice!";
}
cout<<"\n\nDo you wish to continue(y/n):";
cin>>ch1;
}while(ch1=='y'||ch1=='Y');
getch();
}
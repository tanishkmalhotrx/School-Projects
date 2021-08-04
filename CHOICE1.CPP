#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
float a,b,c;
int ch;
cout<<"\n\nEnter your choice:";
cin>>ch;
if(ch==1)
{
cout<<"\n\nEnter the radius:";
cin>>a;
c=3.14*a*a;
cout<<"\n\nArea of the circle is:"<<c;
}
else if(ch==2)
{
cout<<"\n\nEnter base and height:";
cin>>a>>b;
c=0.5*a*b;
cout<<"\n\nArea of the triangle is:"<<c;
}
else cout<<"\n\nSoory..wrong choice!";
getch();
}
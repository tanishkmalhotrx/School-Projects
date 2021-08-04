#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c;
cout<<"\n\nEnter 3nos:";
cin>>a>>b>>c;
if((a>b)&&(a>c))
{
cout<<"\n\n"<<a<<" is largest";
if(b>c)
{
cout<<"\n\n"<<b<<" is next highest";
cout<<"\n\n"<<c<<" is smallest";
}
else
{
cout<<"\n\n"<<c<<" is next highest";
cout<<"\n\n"<<b<<" is smallest";
}
}
else if((b>a)&&(b>c))
{
cout<<"\n\n"<<b<<" is largest";
if(a>c)
{
cout<<"\n\n"<<a<<" is next highest";
cout<<"\n\n"<<c<<" is smallest";
}
else
{
cout<<"\n\n"<<c<<" is next highest";
cout<<"\n\n"<<a<<" is smallest";
}
}
else
{
cout<<"\n\n"<<c<<" is largest";
{
if(a>b)
{
cout<<"\n\n"<<a<<" is next highest";
cout<<"\n\n"<<b<<" is smallest";
}
else
{
cout<<"\n\n"<<b<<" is next highest";
cout<<"\n\n"<<a<<" is smallest";
}
}
getch();
}
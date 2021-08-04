#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c;
cout<<"\n\nEnter 3nos:";
cin>>a>>b>>c;
if((a>b)&&(a>c))
cout<<"\n\n"<<a<<" is largest";
else if((b>a)&&(b>c))
cout<<"\n\n"<<b<<" is largest";
else cout<<"\n\n"<<c<<" is largest";
getch();
}
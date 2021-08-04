#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
float a,b,c;
char ch,ch1;
cout<<"\n\nEnter two numbers:";
cin>>a>>b;
do
{
clrscr();
cout<<"\n\nEnter your choice(+,-,*,/):";
cin>>ch;
switch(ch)
{
case '+':
c=a+b;
cout<<"\n\nSum is:"<<c;
break;
case '-':
c=a-b;
cout<<"\n\nDifference is:"<<c;
break;
case '*':
c=a*b;
cout<<"\n\nProduct is:"<<c;
break;
case '/':
c=a/b;
cout<<"\n\nDivision is:"<<c;
break;
default:cout<<"\n\nSoory..wrong choice!";
}
cout<<"\n\nDo you wish to continue(y/n):";
cin>>ch1;
}while(ch1=='y'||ch1=='Y');
getch();
}
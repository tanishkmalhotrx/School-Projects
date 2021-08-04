//sum of digits
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c,d,e,f;
cout<<"\n\nEnter a 3-digit number:";
cin>>a;
b=a/100;   //1st digit
c=a%100;
d=c/10;  //2nd digit
e=c%10;  //3rd digit
f=b+d+e;
cout<<"\n\nSum of digits is:"<<f;
getch();
}
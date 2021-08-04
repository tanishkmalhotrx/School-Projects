//Functions-Call by reference
//Swapping two numbers
#include<iostream.h>
#include<conio.h>
void swap(int &a,int &b);
void main()
{
clrscr();
int a,b;
cout<<"\n\nEnter two numbers:";
cin>>a>>b;
swap(a,b);
cout<<"\n\nThe swapped numbers are:"<<a<<" "<<b;
getch();
}

void swap(int &a, int &b)
{
int t;
t=a;
a=b;
b=t;
}

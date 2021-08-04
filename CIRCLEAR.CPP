//Functions-Call by value
#include<iostream.h>
#include<conio.h>
float area(int r1);//Funstion prototype declaration
float main()
{
clrscr();
int r;
float ar;
cout<<"\n\nEnter the radius:";
cin>>r;
ar=area(r);//Function call
cout<<"\n\nArea of circle is:"<<ar;
getch();
return (0.0);
}

float area(int r1)  //Function definiton
{
float ar1;
ar1=3.14*r1*r1;
return(ar1);
}

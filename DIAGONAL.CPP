//find the sum of diagonal elemnets
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[4][4], i,j,r,s=0;
cout<<"\n\nEnter same no of rows & cols:";
cin>>r;
cout<<"\n\nEnter "<<r*r<<" elements:";
for(i=1;i<=r;i++)
for(j=1;j<=r;j++)
cin>>a[i][j];
for(i=1;i<=r;i++)
for(j=1;j<=r;j++)
{
if(i==j)
s=s+a[i][j];
}
cout<<"\n\nSum of forward diagonal elements is:"<<s;
getch();
}

//2-D arrays
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[5][5],i,j,r,c;
cout<<"\n\nEnter no of rows:";
cin>>r;
cout<<"\n\nEnter no of cols:";
cin>>c;
cout<<"\n\nEnter "<<r*c<<" elements:";
for(i=1;i<=r;i++)
for(j=1;j<=c;j++)
cin>>a[i][j];
cout<<"\n\nEntered matrix is:";
for(i=1;i<=r;i++)
{
for(j=1;j<=c;j++)
{
cout<<a[i][j]<<"\t";
}
cout<<"\n";
}
getch();
}


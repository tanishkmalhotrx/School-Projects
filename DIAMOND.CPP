//Diamond
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,k,n;
cout<<"\n\nEnter limit:";
cin>>n;
for(i=1;i<=n;i++)
{
for(j=n;j>=i+1;j--)
cout<<" ";
for(k=1;k<=(2*i)-1;k++)
cout<<"*";
cout<<"\n";
}
for(i=1;i<=n-1;i++)
{
for(j=i;j<=(2*i)-1;j++)
cout<<" ";
for(k=1;k<=2*(n-i)-1;k++)
cout<<"*";
cout<<"\n";
}
getch();
}
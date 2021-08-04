//Working with Strings
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
char s1[30],s2[30],s3[50],ch1;
int i,j,ch,l=0;
cout<<"\n\nEnter a string:";
gets(s1); //cin.getline(s1,30);
do
{
clrscr();
cout<<"\n\nEnter your choice(1/2/3/4):";
cin>>ch;
switch(ch)
{
case 1:for(i=0;s1[i]!='\0';i++)
l++;
cout<<"\n\nLength of the string is:"<<l;
break;
case 2:for(i=0,j=0;s1[i]!='\0';i++,j++)
s2[j]=s1[i];
s2[j]='\0';
cout<<"\n\nCopied string is:"<<s2;
break;
case 3: for(i=0;s1[i]!='\0';i++)
l++;
for(i=l-1,j=0;i>=0;i--,j++)
s2[j]=s1[i];
s2[j]='\0';
cout<<"\n\nReversed string is:"<<s2;
break;
case 4:cout<<"\n\nEnter another string:";
gets(s2);
for(i=0,j=0;s1[i]!='\0';i++,j++)
s3[j]=s1[i];
for(i=0;s2[i]!='\0';i++,j++)
s3[j]=s2[i];
s3[j]='\0';
cout<<"\n\nConcatenated string is:"<<s3;
break;
default:cout<<"\n\nSorry..wrong choice!";
}
cout<<"\n\nDo you wish to continue(y/n):";
cin>>ch1;
}while(ch1=='y');
getch();
}
//Replace a character in a string
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
char s[30];
int i;
cout<<"\n\nEnter a string:";
gets(s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]=='a')
s[i]='A';
}
cout<<"\n\nNew string is:"<<s;
getch();
}
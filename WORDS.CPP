//Count the number of words in a string
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
char s[40];
int w=0,i;
cout<<"\n\nEnter a string:";
gets(s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]==' ')
w++;
}
cout<<"\n\nNumber of words in the string is:"<<w+1;
getch();
}

#include<iostream.h>
#include<conio.h>
void main()
{
int a;
clrscr();
cout<<"enter your age ";
cin>>a;
 if(a==0)
cout<<"error";
else if(a>0&&a<=18)
cout<<"you are younger ";
else if(a>18&&a<=49)
cout<<"you are senior ";
else if(a>=50)
cout<<"you are old man ";

getch();
}
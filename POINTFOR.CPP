#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int *p[10];
   int a[10],i;
for(i=0;i<10;i++)
{
cout<<"enter no: ";
cin>>a[i];
}
for(i=0;i<10;i++)
{
p[i]=&a[i];
}
for(i=0;i<10;i++)
{
cout<<"no is: "<<*p[i]<<endl;
}

getch();
}
#include<iostream.h>
#include<conio.h>
void add();
void main()
{
int p,q,r;
cout<<"enter three no: "<<endl;
cin>>p>>q>>r;
add(p,q,r);
getch();
}
void add(int a,int b,int c)
{
int d;
d=a+b+c;
cout<<"sum is "<<d<<endl;
}

#include<iostream.h>
#include<conio.h>
class sample
{
private:int a,b,c;
public:
void get()
{
cout<<"enter three no:"<<endl;
cin>>a>>b>>c;
}
void disp()
{
cout<<"value : "<<a<<b<<c<<endl;
}
void operator -()
{
a=-a;
b=-b;
c=-c;
}
};
void main()
{
clrscr();
sample s;
s.get();
cout<<"value before operation"<<endl;
s.disp();
-s;
cout<<"value after operation"<<endl;
s.disp();
getch();
}
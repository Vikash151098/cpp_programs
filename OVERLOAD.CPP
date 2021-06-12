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
void sample::operator -(sample s1)
{

s1.a=-s1.a;
s1.b=-s1.b;
s1.c=-s1.c;

}
 };
void main()
{
clrscr();
sample s,s1;
s.get();
cout<<"value before operation"<<endl;
s.disp();
-s;
cout<<"value after operation"<<endl;
s.disp();
getch();
}
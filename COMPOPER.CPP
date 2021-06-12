#include<iostream.h>
#include<conio.h>
class complex
{
private:
float real,img;
public:
void get()
{
cout<<"enter real and imaginary value:"<<endl;
cin>>real>>img;
}
void disp()
{
cout<<"no is :"<<real<<"+j"<<img;
}
complex operator +(complex &c2);
};
complex complex::operator +(complex &c2)
{
complex c3;
c3.real=real+c2.real;
c3.img=img+c2.img;
return(c3);
}
void main()
{
clrscr();
complex c1,c2,c3;
c1.get();
c2.get();
c3=c1+c2;
c1.disp();
c2.disp();
c3.disp();
getch();
}
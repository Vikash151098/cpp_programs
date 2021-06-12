#include<iostream.h>
#include<conio.h>
class complex
{
private:
int real,img;
public:
void get()
{
cin>>real>>img;
}
void sum(complex c1,complex c2)
{
complex c3;
c3.real=c1.real+c2.real;
c3.img=c1.img+c2.img;
}
void display()
{
complex c4;

cout<<"sum is"<<real<<"+j"<<img;
}
};

void main()
{
clrscr();
complex c1,c2,c3,c4;
cout<<"enter 1st real and imaginary number"<<endl;
c1.get();
cout<<"enter 2nd real and imaginary number"<<endl;
c2.get();
c3.sum(c1,c2);
c4.display();
getch();
}











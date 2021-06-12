#include<iostream.h>
#include<conio.h>
class a
{
int a,b,c;
public:
void get()
{
cout<<"enter any two no:"<<endl;
cin>>a>>b;
}
void add()
{
c=a+b;
cout<<"sum is :"<<c<<endl;
}
};
class b
{
int x,y,z;
public:
void getm()
{
cout<<"enter any two no:"<<endl;
cin>>x>>y;
}
void mul()
{
z=x*y;
cout<<"multiplication is :"<<z<<endl;
}
};
class c
{
public:
a obj1;
b obj2;
};
void main()
{clrscr();
c obj3;
obj3.obj1.get();
obj3.obj1.add();
obj3.obj2.getm();
obj3.obj2.mul();
getch();
}
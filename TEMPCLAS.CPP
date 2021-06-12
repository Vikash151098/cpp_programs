#include<iostream.h>
#include<conio.h>
template<class T>
class sample
{
private:
T a,b,c,d;
public:
void get()
{
cout<<"enter any two no:"<<endl;
cin>>a>>b;
}
void car()
{
c=a+b;
d=a-b;
}
void show()
{
cout<<"a is :"<<a<<endl;
cout<<"b is :"<<b<<endl;
cout<<"sum is :"<<c<<endl;
cout<<"substraction is :"<<d<<endl;
}
};
void main()
{
clrscr();
sample<int>ob1;
sample<float>ob2;
ob1.get();
ob1.car();
ob1.show();
ob2.get();
ob2.car();
ob2.show();
getch();
}

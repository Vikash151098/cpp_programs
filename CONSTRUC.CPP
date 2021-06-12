#include<iostream.h>
#include<conio.h>
class sample
{
float a,b;
public:
sample(float m,float n)
{
a=m;
b=n;
}
void get()
{
cout<<"enter any two no :"<<endl;
cin>>a>>b;
}
void avg()
{
float c;
c=(a+b)/2;
cout<<"average is:"<<c<<endl;
}
void disp()
{
cout<<a<<b;
}
};
void main()
{
clrscr();
sample s1(20,30);
sample s2=sample(30,50);
s1.disp();
s2.disp();
s1.get();
s2.get();
s1.avg();
s2.avg();
getch();
}

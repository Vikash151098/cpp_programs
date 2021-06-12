// programm of zero argument and parameterized constructure.
#include<iostream.h>
#include<conio.h>
class add
{
int a,b,*p;
public:
add()
{a=0;
b=0;
cout<<"invoke";
}
add(int)
{
 p=new int;
 *p=10;

cout<<"condtructor invoke";
}
void get()

{
cout<<"enter any two no:"<<endl;
cin>>a>>b;
}
void sum()
{
int c;
c=a+b;
cout<<"sum is: "<<c<<endl;
}
void disp()
{
cout<<"\n"<<a<<endl<<b<<endl;
}
};
void main()
{clrscr();
add s1;
s1.disp();
add s2(4);
s2.disp();

s2.sum();
add s3(8);
s3.disp();


getch();
}
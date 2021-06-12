#include<iostream.h>
#include<conio.h>
class add
{
protected:int a,b,p;
public:
add(int i,int j)
{
a=i;
b=j;
}
void sum()
{
p=a+b;
cout<<"sum is "<<p<<endl;
}

};
class multi:public add
{
protected:int z,x,y;
public:
multi(int i,int j,int k):add(i,j)
{
z=k;
x=i;
y=j;
}
void show()
{

cout<<"value is: "<<x<<endl<<y<<endl<<z;
}
};
void main()
{
clrscr();
add b1(4,8);
multi b2(4,5,9);
b1.sum();

b2.show();
getch();
}
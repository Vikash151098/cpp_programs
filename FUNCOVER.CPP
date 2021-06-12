#include<iostream.h>
#include<conio.h>
class area_s
{
private:
int a,b;
float c,q,p;

public:
int area(int a,int b)
{
p=0.5*a*b;

return (p);
}
void show()
{
cout<<"area of triangle"<<p<<endl;
}
float area(float c)
{


q=6*c*c;

return (q);
}
void showc()
{
cout<<"area of cube is "<<q<<endl;
}
 };

void main()
{
clrscr();
area_s b;
b.area(3,7);
b.show();
b.area(5.5);
b.showc();
getch();
}
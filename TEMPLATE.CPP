#include<iostream.h>
#include<conio.h>
template<class t>
void swap(t &a,t &b)
{
t temp;
temp=a;
a=b;
b=temp;
}

void main()
{int a,b;
float c,d;
swap(a=2,b=6);
swap(c=2.5,d=6.7);

getch();
}





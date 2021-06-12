#include<iostream.h>
#include<conio.h>
template<class t>
class a
{
t a,b;
public:
void get();
void show();
};
template<class t>
void a<t>::get()
{
cout<<"enter any two no. "<<endl;
cin>>a>>b;
}
template<class t>
void a<t>::show()
{
cout<<"numbers  are "<<a<<" "<<b<<endl;
}
void main()
{clrscr();
a<int>a1;
a<float>a2;
a1.get();
a2.get();
a1.show();
a2.show();
getch();
}
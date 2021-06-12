#include <iostream.h>
#include<conio.h>
int swap(int a,int b);
void main()
{

int p,q,sw;
clrscr();
cout<<"enter any value you want to swap "<<endl;
cin>>p>>q;
sw=swap(p,q);
cout<<"after swapping "<<sw<<endl;
getch();
}
int swap(int a,int b)
{
int t;
t=a;
a=b;
b=t;

return 0 ;

}


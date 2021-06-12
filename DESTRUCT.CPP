#include<iostream.h>
#include<conio.h>
class sample
{
float *t;
public:
sample()
{
int g;
cout<<"enter no:"<<endl;
cin>>g;
g=*t;
cout<<t;
cout<<"dynamic include"<<endl;
}
~sample(){
cout<<"delete dynamic"<<endl;
delete t;
}
};
void main()
{

sample a1;
getch();
}

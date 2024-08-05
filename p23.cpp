//wap for using arrow operator.
#include<iostream>
#include<conio.h>
using namespace std;
class simple
{
	int a;
	int b;
	public:
	int c;
	int add(int,int);
};
int simple::add(int x,int y)
{
	a=x;
	b=y;
	return(a+b);
}
int main()
{
	int sum;
	simple e;
	sum=e.add(6,5);
	cout<<sum<<endl;
	e.c=10;
	cout<<e.c<<endl;
	simple*e1= &e;
	sum = e1->add(5, 25);
	cout<<"sum="<<sum<<endl;
	e1->c=20;
	cout<<e1->c<<endl;
	return 0;
}
	


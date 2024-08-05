//wap to illustrate the use of access specifier.
#include<iostream>
#include<conio.h>
using namespace std;
struct simple
{
	private:
	int a;
	int b;
	public:
	int c;
	void set_data(int x,int y)
{
	a=x;
	b=y;
}
int get_data()
{
	return(a+b);
}
};
int main()
{
	 struct simple e;
	e.set_data(5,5);
	cout<<e.get_data()<<endl;
	e.c=30;
	return 0;
}

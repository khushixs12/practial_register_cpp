//nested member function.
#include<iostream>
#include<conio.h>
using namespace std;
class simple
{
	int x;
	public:
		void set_data(int);
		int get_data(void);
		void message(char*);
};
void simple::set_data(int a)
{
	x=a;
	message("setting");
}
int simple::get_data(void)
{
	message("getting");
	return x;
}
void simple::message(char*s)
{
	cout<<s<<endl;
}
int main()
{
	simple e;
	e.set_data(5);
	cout<<e.get_data()<<endl;
	return 0;
}

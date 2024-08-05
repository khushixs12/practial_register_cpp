//static member function.
#include<iostream>
#include<conio.h>
using namespace std;
class sample
{
	static int a;
	public:
		static void initialize(int x)
		{
			a=x;
		}
		void display()
		{
			cout<<a<<endl;
		}
};
int sample::a;
int main()
{
	sample s;
	sample::initialize(1);
	s.display();
	getch();
	return 0;
}


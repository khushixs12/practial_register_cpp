//wap on classes and objects.
#include<iostream>
#include<conio.h>
using namespace std;
class largest 
{
	private:
	int a;
	int b;
	public:
	void input_data(int x,int y)
	{
		a=x;
		b=y;
	}
	int big()
	{
		if(a>b)
		return a;
		else
		return b;
	 } 
    };
      int main()

     {
	largest l;
	int a,b;
	cout<<"enter two numbers"<<endl;
	cin>>a>>b;
	l.input_data(a,b);
	cout<<"the largest number is"<<l.big()<<endl;
	getch();
	return 0; 
     }


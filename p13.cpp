//wap for function prototyping
#include<iostream>
#include<conio.h>
using namespace std;
float multiply(int,float);
int main()
{
	int x=2;
	float y=3.4,z;
	z= multiply(x,y);
	cout<<"z="<<z<<endl;
	getch();
}
		float multiply(int a,float b)
		{
			return(a*b);
		}


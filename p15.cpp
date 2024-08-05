//wap for default arguments.
#include<iostream>
#include<conio.h>
using namespace std;
int multiply(int a,int b,int c=5);
int main()
{
	int x,y;
	x=multiply(10,20,30);
	y=multiply(10,20);
	cout<<x<<endl<<y<<endl;
	getch();
}
int multiply(int a,int b,int c)
{
	return(a*b*c);
}

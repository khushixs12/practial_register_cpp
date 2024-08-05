//pgm for a function can also return by reference
#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;
int &bigger(int&, int&);
int main()
{
	int x,y;
	x=1,y=2;
	bigger(x,y)=20;
	cout<<x<<endl<<y<<endl;
	getch();
}
int &bigger(int &a,int &b)
{
if(a>b)
	return a;
else
	return b;
}

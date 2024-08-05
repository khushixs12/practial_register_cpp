#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int p=10;
	int &r=p;
	int &s=r;
	cout<<"p=" <<p<<endl;
	cout<<"r=" <<r<<endl;
	cout<<"s=" <<s<<endl;
	getch();
	return 0;
}

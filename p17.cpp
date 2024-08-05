//wap for scope resolution operator.
#include<iostream>
#include<conio.h>
using namespace std;
int a=10;
int main()
{
	int a=20;
	cout<<"a="<<a<<endl;
	cout<<"a="<<::a<<endl;
	getch();
	return 0;
}

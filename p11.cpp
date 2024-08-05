
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[]={2,5,6};
	int (&p)[3]=a;
	for(int i=0;i<3;i++)
	{
		cout<<p[i]<<endl;
	}
	getch();
}

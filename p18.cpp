//wap for structures in c.
#include<stdio.h>


struct simple
{
	int a;
	double b;
};
int main()
{
	struct simple e1,e2;
	e1.a=10;
	e1.b=20.0;
	e2.b=1;
	e2.b=2.0;
	printf("%d %f %d %f",e1.a,e2.b,e2.a,e2.b);
	return 0;
}


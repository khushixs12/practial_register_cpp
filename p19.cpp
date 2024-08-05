//Wap for structures in c++
#include<iostream>
#include<conio.h>
using namespace std;
struct employee
{
	int salary;
	int bonus;
	void get_salary(int age,int y)
	{
		if(age<20)
		{
			salary=(y-(y/2));
		}
		else
		{
		salary=y;	
		}
	}
	int put_salary()
	{
		return salary;
	}
};
int main()
{
	struct employee e1,e2;
	e1.get_salary(10,10000);
	e2.get_salary(22,10000);
	cout<<e1.put_salary()<<endl;
	cout<<e2.put_salary()<<endl;
	return 0;
}

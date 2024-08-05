#include <iostream>
#include <conio.h>

using namespace std;

class Employee{
    char name[20];
    float salary;
    public:
    void get_details();
    void display_details();
};

void Employee :: get_details(){
    cout << "Enter the name of the employee: ";
    cin >> name;
    cout << "Enter the salary of the employee: ";
    cin >> salary;
}

void Employee :: display_details(){
    cout << "Name: " << name << endl;
    cout << "Salary: " << salary << endl;
} 

int main(){
    int j;
    Employee Director[3];
    for (j = 0; j < 3; j++){
        cout << "Enter the details of the Director " << j+1 << endl;
        Director[j].get_details();
    }

    for (j = 0; j < 3; j++){
        cout << "Details of the Director " << j+1 << endl;
        Director[j].display_details();
    }

    getch();
    return 0;
}

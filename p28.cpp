#include <iostream>
using namespace std;

class Attitude1
{
public:
    void display(double);
};

class Attitude2
{
public:
    void display(double);
};

// Define the member functions for Attitude1
void Attitude1::display(double d)
{
    cout << "Negative attitude is the key for " << d << "% failure" << endl;
}

// Define the member functions for Attitude2
void Attitude2::display(double d)
{
    cout << "Positive attitude is the key for " << d << "% success" << endl;
}

int main()
{
    Attitude1 a1;
    Attitude2 a2;
    double x;
    
    cout << "Enter the number:" << endl;
    cin >> x;
    
    a1.display(x);
    a2.display(x);
    
    return 0;
}


#include <iostream>
using namespace std;

class Addition
{
public:
    int add(int a, int b = 2);
};

int Addition::add(int a, int b)
{
    return a + b;
}

int main()
{
    Addition a1;
    cout << a1.add(5) << endl;  // Uses default argument for the second parameter
    // cout << a1.add(5.5);     // This line will cause a compilation error due to type mismatch

    return 0;
}


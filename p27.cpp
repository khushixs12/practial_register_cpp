#include <iostream>
using namespace std;

class attitude
{
public:
    void display(void);
    void display(int);
};

void attitude::display(void)
{
    cout << "attitude" << endl;
}

void attitude::display(int d)
{
    cout << "positive A+T+T+I+T+U+D+E=" << d << "%success\n";
}

int main()
{
    attitude a1;
    a1.display();
    a1.display(100);
    return 0;
}


#include <iostream>
using namespace std;

class sample
{
    private:
        int x;
        int y;
    public:
        void initialize(int i, int j)  
        {
            x = i;
            y = j;
        }
        void display()
        {
            cout << "x=" << x << endl << "y=" << y << endl;
        }
};

int main()
{
    sample s;
    s.initialize(20, 30);  
    s.display();
    return 0;
}


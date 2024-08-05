 #include <iostream>  // Removed <conio.h> as it's unnecessary
using namespace std;

class Simple {  // Changed class name to follow naming conventions
    int a;
public:
    void set_data(int x) {
        this->a = x;  // Added missing semicolon
    }

    void display(void) const {  // Added const as display does not modify the object
        cout << "The value of a = " << this->a << endl;
        cout << "The address of the object = " << this << endl;
    }
};

int main() {
    Simple e;  // Changed to match class name
    e.set_data(5);
    e.display();
    return 0;
}


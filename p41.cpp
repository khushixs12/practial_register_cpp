// Creation of Nested class

#include <iostream>
#include <conio.h>

using namespace std;

class enclose{
    private:
    int a;
    double b;

    public:
    void set_enclose();
    void get_enclose();

    class inner_nested{
        private:
        int c;
        double d;

        public:
        void set_inner_nested(){
            c = 20;
            d = 30.5;
        }

        void get_inner(){
            cout << "Nested Class" << endl;
            cout << "Value of c: " << c << endl;
            cout << "Value of d: " << d << endl;
        }
    };
};

void enclose :: set_enclose(){
    a = 10;
    b = 20.5;
}

void enclose :: get_enclose(){
    cout << "Outer Class" << endl;
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;
}

int main(){
    enclose e;
    e.set_enclose();
    e.get_enclose();
    enclose :: inner_nested i;
    i.set_inner_nested();
    i.get_inner();

    getch();
    return 0;
}

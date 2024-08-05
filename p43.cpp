#include <iostream>
#include <conio.h>
using namespace std;

class A{
    public:
    class B{
        int b;
        public:
        void print();
    };
};

void A :: B :: print(){
    cout << "CPP IS CLASSY" << endl;
}

int main(){
    A::B b;
    b.print();
    getch();
    return 0;
}

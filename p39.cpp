#include <iostream>
#include <conio.h>

using namespace std;

class A{
    public:
    int a;
    void set(A, int);
    void set(int, A&);
    void set(A*, int);
};

void A :: set(A x, int p){
    x.a = p;
    cout << "After passing the value of a using object: " << x.a << endl;
}

void A :: set(int q, A& y){
    y.a = q;
    cout << "After passing the value of a using reference: " << y.a << endl;
}

void A :: set(A* z, int x){
    z->a = x;
    cout << "After passing the value of a by pointer: " << z->a << endl;
}

int main(){
    A a1;
    a1.a = 10;
    cout << "Before passing the value of a" << a1.a << endl;

    a1.set(a1, 20);
    a1.set(30, a1);
    a1.set(&a1, 40);

    getch();
    return 0;
}

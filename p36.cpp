#include <iostream>
using namespace std;

class A; 

class X {
    int x;
public:
    void set_value(int i) {
        x = i;
    }
    friend void maximum(X, A); 
};

class A {
    int a;
public:
    void set_value(int i) {
        a = i;
    }
    friend void maximum(X, A); 
};


void maximum(X m, A n) {
    if (m.x >= n.a) {
        cout << m.x;
    } else {
        cout << n.a;
    }
}

int main() {
    A a;
    a.set_value(1); 
    X x;
    x.set_value(2); 
    maximum(x, a); 
    return 0;
}


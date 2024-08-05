#include <iostream>
using namespace std;

class sample {
    int a;
public:
    
    friend void change(sample &);
};


void change(sample &x) {
    x.a = 5;
    cout << x.a;
}

int main() {
    sample A;
    change(A);
    return 0;
}


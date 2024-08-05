#include <iostream>
#include <conio.h>
using namespace std;

namespace A{
    int x = 10;
    namespace B{
        int y = 20;
    }
}

int main(){
    using namespace A;
    cout << "x: " << x << endl;
    cout << "y: " << B::y << endl;

    return 0;
}

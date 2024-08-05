#include <iostream>
#include <conio.h>
using namespace std;

namespace n1{
    float a = 100.99;
    int b = 90;
    namespace n2{
        float c = 80.88;
    }
}

namespace n3{
    int b = 35;
    int n = 42;
}

int main(){
    using namespace n1;
    cout << a << endl;
    cout << b << endl;
    cout << n2::c << endl;

    using namespace n3;
    cout << n << endl;
    cout << n3::b <<endl;

    return 0;
}

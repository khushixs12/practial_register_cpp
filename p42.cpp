#include <iostream>
#include <conio.h>

using namespace std;

class enclose{
    int a;
    public:
    class nested_exception{
        int b;
    };
};

int main(){
    enclose e;
    cout << "Size of e: " << endl;
    cout << sizeof(e) << endl;

    cout << "Size of enclose: " << endl;
    cout << sizeof(enclose) << endl;
    return 0;
}

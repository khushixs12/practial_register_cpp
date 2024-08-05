#include <iostream>
using namespace std;

class sample; 

class demo {
public:
    void set_data(sample &, int); 
};

class sample {
private:
    int x;
public:
    int get_data(void);

    
    friend void demo::set_data(sample &a, int b);
};

void demo::set_data(sample &a, int b) {
    a.x = b; }


int sample::get_data() {
    return x;
}

int main() {
    sample e;
    demo f;
    f.set_data(e, 5); 
    cout << e.get_data() << endl; 
    return 0;
}


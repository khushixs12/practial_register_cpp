#include <iostream>
#include <conio.h>

using namespace std;

class Sample{
    int private_variable;
    int protected_variable;

    public:
        void getData(){
            private_variable = 10;
            protected_variable = 99;
        }

        friend class F;
};

class F{
    public:
        void display(Sample &s){
            cout << "Private Variable: " << s.private_variable << endl;
            cout << "Protected Variable: " << s.protected_variable << endl;
        }
};

int main(){
    Sample S;
    F fri;
    S.getData();
    fri.display(S);
    return 0;
}

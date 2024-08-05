#include <iostream>
using namespace std;

class Student {
    int m1, m2;
public:
    void get() {
        cout << "Enter the marks of the student in subject 1: ";
        cin >> m1;

        cout << "Enter the marks of the student in subject 2: ";
        cin >> m2;
    }

    void show() const {
        cout << "Marks in subject 1: " << m1 << endl;
        cout << "Marks in subject 2: " << m2 << endl;
    }

    Student increased(const Student& s) const; 
};

Student Student::increased(const Student& s) const {
    Student st;
    st.m1 = m1 + s.m1;
    st.m2 = m2 + s.m2;
    return st;
}

int main() {
    Student s1, s2, s3;
    cout << "Enter the marks of student 1" << endl;
    s1.get();

    cout << "Enter the marks of student 2" << endl;
    s2.get();

    cout << "Increased marks of student 1" << endl;
    s3 = s1.increased(s2);

    s3.show();
    
    
    cout << "Press Enter to continue...";
    cin.ignore();
    cin.get();

    return 0;
}


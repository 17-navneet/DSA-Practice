#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int rollno;
    float marks;

    void display() {
        cout << "name: " <<name<< endl;
        cout << "roll no: "<< rollno << endl;
        cout << "marks: "<<marks << endl;
    }
};

int main() {
    Student s1;

    s1.name = "Navneet Kumar";
    s1.rollno = 37;
    s1.marks = 54;

    s1.display();

    return 0;
}
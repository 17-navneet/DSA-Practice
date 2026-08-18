#include<iostream>
using namespace std;

class rectangle{
    public:
    float length;
    float breadth;

    void input(){
        cout<<"Enter the length: "<<endl;
        cin>>length;
        cout<<"Enter the breadth: "<<endl;
        cin>>breadth;
    }
    void area(){
        float area = length*breadth;
        cout<<"The area of rectangle is: "<< area<<endl;

    }

    void display(){
        cout<<"Length of the rectangle is: "<<length<<endl<<"Breadth of the rectangle is : "<<breadth<<endl;
    }
};
int main(){
    rectangle r1;
    r1.input();
    r1.area();
    r1.display();
}
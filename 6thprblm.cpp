#include<iostream>
using namespace std;
int calculate(int a, int b){
    return a+b;
}
double calculate(double a, double b){
    return a+b;
}
int calculate(int a, int b, int c){
    return a+b+c;
}
int main(){
    int a,b,c;
    double x,y;
    cout<<"Enter the two integers: ";
    cin>>a>>b;
    cout<<"The sum is: "<<calculate(a,b)<<endl;
    cout<<"Enter the decimal numbers: ";
    cin>>x>>y;
    cout<<"The sum of the two decimal number is: "<<calculate(x,y)<<endl;
    cout<<"Enter the three integers: ";
    cin>>a>>b>>c;
    cout<<"The sum of the three integers is: "<<calculate(a,b,c);
}
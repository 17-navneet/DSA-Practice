#include<iostream>
using namespace std;
class BankAccount{
    public:
    int accountNumber;
    string accountHolder;
    float balance;

    void deposit(){
        int amount;
        cin>>amount;
        balance+=amount;
    }
    void display(){
        cout<<"Account Number: "<<accountNumber<<endl;
        cout<<"Account holder: "<<accountHolder<<endl;
        cout<<"Current Balance: "<<balance<<endl;
    }

};
int main(){
    BankAccount b1;
    b1.accountNumber=12518540;
    b1.accountHolder="Navneet kumar";
    b1.balance=100.00;
    b1.deposit();
    b1.display();
}

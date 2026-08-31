#include<iostream>
using namespace std;

void printNumber(int n) {
    if (n < 1) {
        return;
    }

    cout << n << " ";
    printNumber(n - 1);
}

int main() {
    int n;
    cin >> n;

    printNumber(n);

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    double bill, amountToPay;
    cout << "Input bill amount: ";
    cin >> bill;

    if (bill >= 1000) {
        amountToPay = bill - (bill * 0.10);
    } else {
        amountToPay = bill;
    }

    cout << "Amount to pay: " << amountToPay << endl;

    return 0;
}
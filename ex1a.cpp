#include <iostream>
using namespace std;

int main() {
    // Customer information
    int age;
    double bankBalance;
    string crbStatus;
    int customerDuration;

    // Input customer information
    cout << "Enter customer's age: ";
    cin >> age;

    if (age > 22) {
        cout << "Enter customer's bank balance: ";
        cin >> bankBalance;

        if (bankBalance > 50000) {
            cout << "Enter customer's CRB status (good/bad): ";
            cin >> crbStatus;

            if (crbStatus == "good") {
                cout << "Enter customer's duration as a customer (in months): ";
                cin >> customerDuration;

                if (customerDuration > 6) {
                    cout << "Customer is qualified for the loan." << endl;
                } else {
                    cout << "Customer is not qualified. Customer duration is less than 6 months." << endl;
                }
            } else {
                cout << "Customer is not qualified. CRB status is bad." << endl;
            }
        } else {
            cout << "Customer is not qualified. Bank balance is less than 50,000." << endl;
        }
    } else {
        cout << "Customer is not qualified. Age is less than or equal to 22." << endl;
    }

    return 0;
}

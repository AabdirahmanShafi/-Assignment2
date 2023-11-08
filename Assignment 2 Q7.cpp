#include <iostream>
using namespace std;

int main() {
    int daysLate;
    string bookType;

    cout << "Enter the number of days late: ";
    cin >> daysLate;

    cout << "Enter the type of book (regular/children's/reference): ";
    cin >> bookType;

    double lateFee = 0.0;

    if (bookType == "regular") {
        if (daysLate <= 7) {
            lateFee = 0.50 * daysLate;
        } else {
            lateFee = 3.50 + 1.00 * (daysLate - 7);
        }
    } else if (bookType == "children's") {
        lateFee = 0.25 * daysLate;
    } else if (bookType == "reference") {
        cout << "No late fee for reference books." << endl;
    } else {
        cout << "Invalid book type." << endl;
    }

    cout << "Late fee: ksh" << lateFee << endl;

    return 0;
}

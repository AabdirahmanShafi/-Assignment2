#include <iostream>
using namespace std;
int main() {
    double accountBalance = 9200.0;
    double withdrawalAmount;
    double dailyLimit = 5000.0;

    cout << "Enter the withdrawal amount: $";
    cin >> withdrawalAmount;

    if (withdrawalAmount > accountBalance) {
        cout << "Insufficient funds." << endl;
    } else if (withdrawalAmount > dailyLimit) {
        cout << "Exceeds daily withdrawal limit." << endl;
    } else {
        accountBalance -= withdrawalAmount;
        cout << "Withdrawal successful. Remaining balance: $" << accountBalance << endl;
    }

    return 0;
}

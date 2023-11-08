#include <iostream>
using namespace std;

int main() {
    double purchaseAmount;
    double totalCost;

    cout << "Enter the purchase amount: ksh";
    cin >> purchaseAmount;

    if (purchaseAmount >= 10000) {
        totalCost = purchaseAmount -0.3 * purchaseAmount;
    } else if (purchaseAmount >= 5000) {
        totalCost = purchaseAmount - 0.1 * purchaseAmount;
    } else {
        totalCost = purchaseAmount;
    }

    cout << "Total cost after discount: ksh" << totalCost << endl;

    return 0;
}

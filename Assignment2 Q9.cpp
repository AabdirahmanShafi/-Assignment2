#include <iostream>
using namespace std;

int main() {
    int age;
    string movieType;
    double ticketPrice = 0.0;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter the type of movie (regular/3D): ";
    cin >> movieType;

    if (age < 0 || age > 90) {
        cout << "Invalid age." << endl;
    } else {
        if (age < 18) {
            if (movieType == "3D") {
                ticketPrice =700;
            } else {
                ticketPrice = 500;
            }
        } else if (age >= 18 && age < 55) {
            if (movieType == "3D") {
                ticketPrice = 900;
            } else {
                ticketPrice = 600;
            }
        } else {
            if (movieType == "3D") {
                ticketPrice = 600;
            } else {
                ticketPrice = 700;
            }
        }

        cout << "Ticket price: ksh" << ticketPrice << endl;
    }

    return 0;
}

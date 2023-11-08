#include <iostream>
using namespace std;


int main() {
    string fullName, course;
    int score;

    cout << "Enter student's full name: ";
    getline(cin, fullName);

    cout << "Enter course: ";
    getline(cin, course);

    cout << "Enter the score: ";
    cin >> score;

    char grade;

    switch (score / 10) {
        case 1:
            grade = 'A';
            break;
        case 2:
            grade = 'B';
            break;
        case 3:
            grade = 'C';
            break;
        case 4:
            grade = 'D';
            break;
        default:
            if (score >= 0) {
                grade = 'F';
            } else {
                cout << "Invalid score." << endl;
                return 1; // Exit with an error
            }
    }

    cout << "Full Name: " << fullName << endl;
    cout << "Course: " << course << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}

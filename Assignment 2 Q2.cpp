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

    if (score >= 70) {
        grade = 'A';
    } else if (score >= 60) {
        grade = 'B';
    } else if (score >= 50) {
        grade = 'C';
    } else if (score >= 40) {
        grade = 'D';
    } else if (score >= 0) {
        grade = 'F';
    } else {
        cout << "Invalid score." << endl;
        return 1; // Exit the program with an error code
    }

    cout << "Full Name: " << fullName << endl;
    cout << "Course: " << course << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}

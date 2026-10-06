
// Write a C++ program that takes a student's marks and attendance and assigns a performance category.

#include<iostream>
using namespace std;

int main () {

    int marks, attendance;

    cout << "Enter Student Marks: ";
    cin >> marks;

    cout << "Enter Student Attendance: ";
    cin >> attendance;

    if ((marks < 0 || marks > 100) || (attendance < 0 || attendance > 100)) {
        cout << "Invalid Input" << endl;

    } else if (marks >= 90 && attendance >= 90) {
        cout << "Outstanding!" << endl;

    } else if (marks >= 80 && attendance >= 75) {
        cout << "Excellent!" << endl;

    } else if (marks >= 70 && attendance >= 75) {
        cout << "Good!" << endl;

    } else if (marks >= 50 && attendance >= 60) {
        cout << "Average!" << endl;

    } else {
        cout << "Poor" << endl;

    }
    
    return 0;
}
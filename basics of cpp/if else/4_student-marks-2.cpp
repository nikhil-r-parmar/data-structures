
// Write a C++ program that takes a student's marks and attendance and calculate them.

#include<iostream>
using namespace std;

int main () {

    int marks, attend_p;

    cout << "Enter Student Marks: ";
    cin >> marks;
    cout << "Enter Student attendance percentage: ";
    cin >> attend_p;


    // input validation

    if (marks > 100 || marks < 0) {
        cout << "Invalid marks input." << endl;

    } else if (attend_p > 100 || attend_p < 0) {
        cout << "Invalid attendance percentage. " << endl;

    } else if (marks < 40) {
        cout << "Fail." << endl;

    } else {
        if (attend_p < 75 ) {
            cout << "Fail - Attendace shortage." << endl;

        } else {

            if (marks >= 90 && attend_p >= 90) {
                cout << "Excellent Performance" << endl;
            } else {
                cout << "Pass" << endl;
            }

        }
    }

    return 0;

}
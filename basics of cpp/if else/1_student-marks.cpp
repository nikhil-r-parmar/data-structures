
// Write a C++ program that takes a student's marks out of 100 and prints Grades.

#include<iostream>
using namespace std;

int main() {

    int marks;

    cout << "Enter Student Marks: ";
    cin >> marks;

    if (marks <=100 && marks >= 90) {
        cout << "Grade: A" << endl;

    } else if (marks < 90 && marks >= 80) {
        cout << "Grade B" << endl;

    } else if (marks < 80 && marks >= 70) {
        cout << "Grade C" << endl;

    } else if (marks < 70 && marks >= 60) {
        cout << "Grade D" << endl;

    } else if (marks < 60 && marks >= 40) {
        cout << "Grade E" << endl;

    } else if (marks < 40 && marks >= 0) {
        cout << "Failed" << endl;

    } else {
        cout << "Invalid Marks" << endl;
        
    }

    return 0;
}
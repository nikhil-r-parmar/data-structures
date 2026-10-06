
// Write a C++ program for a bank loan eligibility checker.

#include<iostream>
using namespace std;

int main () {

    int age, salary, creditScore;
    char existingLoan;

    cout << "Loan Eligibility Checker!" << endl;

    cout << "\nEnter Your age: ";
    cin >> age;

    if (age < 18 || age > 100) {
        cout << "Invalid Age Entered!" << endl;

    } else {
        cout << "Enter Your Salary: ";
        cin >> salary;

        if (salary < 0) {
            cout << "Invalid Salary entered." << endl;

        } else {
            cout << "Enter Your Credit Score: ";
            cin >> creditScore;

            if (creditScore < 0 || creditScore > 900) {
                cout << "Invalid Credit Score entered." << endl;

            } else {
                cout << "Is your any loan exists? (Y/N): ";
                cin >> existingLoan;

                if (existingLoan == 'Y' || existingLoan == 'N') {
                    if (age >= 21) {
                        if (creditScore >= 650) {
                            if (salary >= 50000) {
                                if (existingLoan == 'N') {
                                    cout << "Congratulations! Loan Approved" << endl;

                                } else {
                                    cout << "Loan Requires Manual Review" << endl;

                                }

                            } else {
                                cout << "Not Eligible - Salary" << endl;

                            }

                        } else {
                            cout << "Not Eligible - Credit Score" << endl;

                        }

                    } else {
                        cout << "Not Eligible - Age" << endl;

                    }

                } else {
                    cout << "Invalid Loan Status" << endl;

                }

            }

        }

    }

    return 0;
}

// Write a C++ program for a login system.

#include<iostream>
using namespace std;

int main () {

    string username = "admin";
    string password = "12345";

    string user, pass;
    int accStatus;

    cout << "Enter Your Username: ";
    cin >> user;

    if (user == username) {
        cout << "Enter Your Password: ";
        cin >> pass;

        if (pass == password) {
            cout << "Select Your Account status" << endl;
            cout << "1 for Active, 0 for Inactive: " << endl;
            cin >> accStatus;

            if (accStatus == 1) {
                cout << "Login Successfull !" << endl;

            } else if (accStatus == 0) {
                cout << "Accout Blocked!" << endl;

            } else {
                cout << "Invalid Account Status" << endl;
                
            }

        } else {
            cout << "Login Failed - Invalid Password." << endl;

        }


    } else {
        cout << "Login Failed - invalid username." << endl;

    }

    return 0;
}
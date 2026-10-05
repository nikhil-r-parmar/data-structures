
// Write a C++ program for a simple electricity bill calculator.

#include<iostream>
using namespace std;

int main () {

    int units;

    cout << "Enter Units consumed: ";
    cin >> units;

    if (units > 0 && units <= 100) {
        cout << "\nUNITS CONSUMED: " << units << endl;
        cout << "YOUR BILL IS: " << (units * 5) << "Rs." << endl;

    } else if (units > 100 && units <= 200) {
        cout << "\nUNITS CONSUMED: " << units << endl;
        cout << "YOUR BILL IS: " << (units * 7) << "Rs." << endl;

    } else if (units > 200 && units <= 300) {
        cout << "\nUNITS CONSUMED: " << units << endl;
        cout << "YOUR BILL IS: " << (units * 10) << "Rs." << endl;

    } else if (units > 300) {
        cout << "\nUNITS CONSUMED: " << units << endl;
        cout << "YOUR BILL IS: " << (units * 12) << "Rs." << endl;

    } else if (units == 0) {
        cout << "\nNO UNITS CONSUMED" << endl;
        cout << "YOUR BILL IS: 0Rs." << endl;

    } else {
        cout << "Invalid Units" << endl;

    }

    return 0;
}
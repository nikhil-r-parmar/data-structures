
// Write a C++ program that takes three numbers and finds the largest number.

#include<iostream>
using namespace std;
int main () {

    int a, b, c;

    cout << "Enter three Numbers: ";
    cin >> a >> b >> c;

    if (a == b && b == c) { 
        cout << "All Numbers are equal." << endl;

    } else if (a == b) {
        if (a > c) {
            cout << "Two numbers " << a << " and " << b << " are equal and Largest: " << a << endl;
        } else {
            cout << "Two numbers " << a << " and " << b << " are equal and Largest: " << c << endl;
        }

    } else if (b == c) {
        if (b > a) {
            cout << "Two numbers " << b << " and " << c << " are equal and Largest: " << b << endl;
        } else {
            cout << "Two numbers " << b << " and " << c << " are equal and Largest: " << a << endl;
        }
        
    } else if (a == c) {
        if (a > b) {
            cout << "Two numbers " << a << " and " << c << " are equal and Largest: " << a << endl;
        } else {
            cout << "Two numbers " << a << " and " << c << " are equal and Largest: " << b << endl;
        }

    } else {
        if (a > b) {
            if (a > c) {
                cout << "Largest: " << a << endl;
            }

        } else {
            if (b > c) {
                cout << "Largest: " << b << endl;
            } else {
                cout << "Largest: " << c << endl;
            }

        }
    }

    return 0;
}
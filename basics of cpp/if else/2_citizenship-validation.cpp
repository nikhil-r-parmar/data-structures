
    // write a c++ program that validets citizenship.

    #include<iostream>
    using namespace std;

    int main () {

        int age;
        char citizenship;

        cout << "Are you indian citizen ? (Y/N): ";
        cin >> citizenship;

        cout << "Enter Your Age: ";
        cin >> age;

        if (age >= 18) {

            if (citizenship == 'Y') {
                cout << "Eligible to vote" << endl;

            } else if (citizenship == 'N') {
                cout << "Not Eligible - citizenship required.." << endl;

            } else {
                cout << "Invalid citizenship" << endl;

            }

        } else if (age > 0) {

            if (citizenship == 'Y') {
                cout << "Not Eligible" << endl;

            } else if (citizenship == 'N') {
                cout << "Not Eligible" << endl;

            } else {
                cout << "Invalid citizenship" << endl;

            }

        } else {
            cout << "Invalid age entered.." << endl;

        }

        return 0;
    }
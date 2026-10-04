#include<iostream>
using namespace std;
int main () {
    int a = 10;
    int b = 18;
    int c = 45;

    // normal if
    if (a > b) {
        cout << "A is bigger" << endl;
    }

    // if with else 
    if (a > b) {
        cout << "A is bigger" << endl;
    } else {
        cout << "B is bigger" << endl;
    }

    // nested if else 
    if (a > b) {
        cout << "A is bigger" << endl;
    } else {
        if (b > c) {
            cout << "B is bigger" << endl;
        } else {
            cout << "C is bigger" << endl;
        }
    }


    // if - else ladder
    if (a > b) {
        cout << "A is bigger" << endl;
    } else if (b > c) {
        cout << "B is bigger" << endl;
    } else {
        cout << "C is bigger" << endl;
    }

    return 0;
}
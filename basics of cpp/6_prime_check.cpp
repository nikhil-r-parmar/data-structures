#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    bool prime = true;

    int i = 2;
    while (i < n) {
        if (n % i == 0) {
            prime = false;
            break;
        }

        i++;
    }

    if (prime) {
        cout << "The Number is Prime number" << endl;
    } else {
        cout << "The Number is not a Prime number" << endl;
    }

    return 0;
}
#include<iostream>
using namespace std;

int main () {
    int i = 1;
    int n;
    int j = 1;


    cout << "Enter N: ";
    cin >> n;

    // print 1 to n
    while (i<=n) {
        cout << i << ", ";
        i++;
    }

    cout << endl;

    // print 1 to n even numbers
    cout << "Even Numbers: ";
    while (j<=n) {
        if(j%2==0) {
            cout << j << ", ";
        }
        j++;
    }

    return 0;
}

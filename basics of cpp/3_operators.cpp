#include<iostream>
using namespace std;

int main () {

    // Assignment operator

    int a = 10;
    int c = 20;
    int b = c;

    // Artithmetic opertaors 
    cout << "add: " << a+b << endl;
    cout << "sub: " << a-b << endl;
    cout << "mult: " << a*b << endl;
    cout << "divide: " << a/b << endl;
    cout << "modulus: " << a%b << endl;

    // Relational operator 
    cout << (a == b) << endl;
    cout << (a < b) << endl;
    cout << (a > b) << endl;
    cout << (a <= b) << endl;
    cout << (a >= b) << endl;
    cout << (a =! b) << endl;

    // Logical operator 
    cout << ((a==b) && (a<b)) << endl;
    cout << ((a==b) || (a<b)) << endl;
    cout << (!a<b) << endl;

}
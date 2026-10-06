
// Write a C++ program for a college admission eligibility checker.

#include<iostream>
using namespace std;

int main () {

    int entranceScore, percentage, income;

    cout << "Enter Student Percentage: ";
    cin >> percentage;

    cout << "Enter Student Enterence Exam Score: ";
    cin >> entranceScore;

    cout << "Enter Student Income: ";
    cin >> income;

    if ((percentage < 0 || percentage > 100) || (entranceScore < 0 || entranceScore > 100) || (income < 0) ) {
        cout << "Invalid Input" << endl;

    } else if (percentage < 50)  {
        cout << "Not Eligible" << endl;

    } else if (entranceScore < 60) {
        cout << "Not Eligible - Entrance Score Too Low" << endl;

    } else if (income <= 300000) {
        cout << "Eligible - Scholarship Category" << endl;

    } else {
        cout << "Eligible - General Category" << endl;

    }

    return 0;
}
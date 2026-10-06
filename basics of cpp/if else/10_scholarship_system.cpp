
    // Student Result & Scholarship System

    #include<iostream>
    using namespace std;

    int main () {

        int marks, attendance, familyincome;
        char backlog;

        cout << "|| Student Result & Scholarship System ||" << endl;

        cout << "\nEnter Your marks: ";
        cin >> marks;

        if (marks >= 0 && marks <= 100) {
            cout << "Enter Attendance Percentage: ";
            cin >> attendance;

            if (attendance >= 0 && attendance <= 100) {
                cout << "Enter Family Income: ";
                cin >> familyincome;

                if (familyincome >= 0) {
                    cout << "Is you have any active backlog? (Y/N): ";
                    cin >> backlog;

                    if (backlog == 'Y' || backlog == 'N') {

                        if(marks >= 40) {
                            if (attendance >= 75) {

                                if(
                                    marks >= 90 &&
                                    attendance >= 90 &&
                                    familyincome <= 300000 &&
                                    backlog == 'N'
                                ) {
                                    cout << "\nCongratulations!" << endl;
                                    cout << "You are Passed and eligible for Full Scholarship !." << endl;

                                } else if (
                                    marks >= 75 &&
                                    attendance >= 75 &&
                                    familyincome <= 500000 &&
                                    backlog == 'N'
                                ) {
                                    cout << "\nCongratulations!" << endl;
                                    cout << "You are Passed and eligible for Half Scholarship !." << endl;

                                } else {
                                    cout << "Passed - No Scholarship" << endl;

                                }

                            } else {
                                cout << "Fail - Attendance Shortage" << endl;

                            }

                        } else {
                            cout << "Student Failed!" << endl;

                        }

                    } else {
                        cout << "Invalid backlog status Entered." << endl;

                    }

                } else {
                    cout << "Invalid Income Entered." << endl;

                }

            } else {
                cout << "Invalid Attendance Entered." << endl;

            }

        } else {
            cout << "Invalid Marks Entered." << endl;

        }

        return 0;
    }
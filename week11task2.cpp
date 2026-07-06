#include <iostream>
#include <string>
using namespace std;

class Student{
    private:
        string studentname;
        double admissionnumber,feebalance;

    public:
        void inputStudentData(){
            cout << "Enter student name: ";
            getline(cin, studentname);
            cout << "Enter admission number: ";
            cin >> admissionnumber;
            cout << "Enter fee balance: ";
            cin >> feebalance;
            cin.ignore();
        }

        void makePayment(){
            double payment;
            cout << "Enter payment amount: ";
            cin >> payment;
            feebalance -= payment;
            if(feebalance < 0) feebalance = 0;
            cout << "Payment successful. Remaining balance: " << feebalance << endl;
        }

        void displayStatus(){
            cout << "\n---------Student Status-----" << endl;
            cout << "Student Name: " << studentname << endl;
            cout << "Admission Number: " << admissionnumber << endl;
            cout << "Fee Balance: " << feebalance << endl;
        }

};
int main(){
    Student std;
    std.inputStudentData();
    std.makePayment();
    std.displayStatus();
    return 0;
}

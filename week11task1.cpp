#include <iostream>
#include <string>
using namespace std;

class Employee{
    private:
        string employeename;
        int employeeid;
        double basicsalary;

    public:
        double Netsalary = 0;

        void setEmployeeDetails(){
            cout << "Enter employee name: "<< endl;
            getline(cin, employeename);
            cout << "Enter employee ID: "<< endl;
            cin >> employeeid;
            cout << "Enter basic salary: "<< endl;
            cin >> basicsalary;
            cin.ignore();
        }

        void calculateSalary(){
            Netsalary = basicsalary + (0.10 * basicsalary);
        }

        void displayEmployeeDetails(){
            cout << "\n---------Results-----\n";
            cout << "Employee Name :" << employeename << endl;
            cout << "Employee ID :"<< employeeid << endl;
            cout << "Basic Salary :"<< basicsalary << endl;
            cout << "Net Salary :"<< Netsalary << endl;
        }
};
int main(){
    Employee emp;
    emp.setEmployeeDetails();
    emp.calculateSalary();
    emp.displayEmployeeDetails();
    return 0;
}
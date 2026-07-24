#include <iostream>
#include <string>
using namespace std;

class MedicalStaff {
protected:
    string name;
    int staffID;

public:
    // Constructor
    MedicalStaff(string n, int id)
        : name(n), staffID(id) {}

    virtual void calculateSalary() {
        cout << "Salary calculation not defined." << endl;
    }

    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Staff ID: " << staffID << endl;
    }
};

class Doctor : public MedicalStaff {
public:
    double basicSalary, allowance;

    Doctor(string n, int id, double bSalary, double allow)
        : MedicalStaff(n, id),
          basicSalary(bSalary),
          allowance(allow) {}

    void calculateSalary() override {
        cout << "Doctor Salary: " << basicSalary + allowance << endl;
    }
};

class Nurse : public MedicalStaff {
public:
    double basicSalary, overtimePay;

    Nurse(string n, int id, double bSalary, double oPay)
        : MedicalStaff(n, id),
          basicSalary(bSalary),
          overtimePay(oPay) {}

    void calculateSalary() override {
        cout << "Nurse Salary: " << basicSalary + overtimePay << endl;
    }
};

int main() {
    Doctor doc("John Doe", 1, 5000.0, 1000.0);
    Nurse nurse("Jane Smith", 2, 3000.0, 500.0);

    doc.displayDetails();
    doc.calculateSalary();

    cout << endl;

    nurse.displayDetails();
    nurse.calculateSalary();

    return 0;
}
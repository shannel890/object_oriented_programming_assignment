#include <iostream>
using namespace std;

class Person{
    public:
        string name;
        int age;
    
    void displayPerson(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
class Student : public Person{
    public:
        double admissionNumber,Class;

        void displayStudent(){
            cout << "Admission Number :" << admissionNumber << endl;
            cout << "Class :" << Class << endl;
        }
};

int main(){
    Student stud;
    stud.name = "Shannel";
    stud.age = 20;
    stud.admissionNumber = 12345;
    stud.Class = 2;
    stud.displayPerson();
    return 0;
}
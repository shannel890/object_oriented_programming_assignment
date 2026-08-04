#include <iostream>
#include <fstream>
using namespace std;

struct Student
{
    char name[50];
    char regNo[20];
    float marks;
};

int main()
{
    Student s;

    ifstream file("results.dat", ios::binary);

    if(!file)
    {
        cout << "File could not be opened." << endl;
        return 1;
    }

    while(file.read((char*)&s, sizeof(s)))
    {
        cout << "Name: " << s.name << endl;
        cout << "Marks: " << s.marks << endl;
        cout << endl;
    }

    file.close();

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

class Vehicle{
    public:
        string Brand;
        double year_of_manufacture;

        void displayVehicle(){
            cout << "Brand: " << Brand << endl;
            cout << "Year of Manufacture: " << year_of_manufacture << endl;
        }

};

class Car : public Vehicle{
    public:
        int numberofdoors;
        double enginecapacity;

        void displayCar(){
            cout << "Number of Doors: " << numberofdoors << endl;
            cout << "Engine Capacity: " << enginecapacity << endl;
        }
};

int main(){
    Car car;
    car.Brand = "Toyota";
    car.year_of_manufacture = 2022;
    car.numberofdoors = 4;
    car.enginecapacity = 2.0;
    
    car.displayVehicle();
    car.displayCar();
    
    return 0;
}
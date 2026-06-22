#include <iostream>
#include <string>
using namespace std;

class RoomBooking{
    public:
        string guest_name;
        int room_number,number_of_days_booked;

        RoomBooking(string guest_name_,int room_number_,int number_of_days_booked_){
            guest_name = guest_name_;
            room_number = room_number_;
            number_of_days_booked = number_of_days_booked_;
            cout << "Room booking confirmed";

        }
        void displayBooking(){
            cout << "Enter guest name :" << guest_name << endl;
            cout << "Enter room number : " << room_number << endl;
            cout << "Enter number of days booked :"<< number_of_days_booked << endl;
        }

        ~RoomBooking(){
            cout << "Booking ended, room released";
        }



};

int main(){
    RoomBooking room("Shannel Kirui",034,21);
    room.displayBooking();
    return 0;
}
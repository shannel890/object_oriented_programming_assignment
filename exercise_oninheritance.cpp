#include <iostream>
#include <string>
using namespace std;

class Person{
    protected:
        string name;

    public:
        void setName(string n){
            name = n;

        }
        string getName(){
            return name;
        }
};

class LibraryMember : public Person{
    private:
        int memberID, booksBorrowed;

    public:
        LibraryMember(string name_,int memberID_,int booksBorrowed_){
            name = name_;
            memberID = memberID_;
            booksBorrowed = booksBorrowed_;

        }

    int getMemberID(){
        return memberID;
    }
    int getBooksBorrowed(){
        return booksBorrowed;
    }

};
class PremiumMember : public LibraryMember{
    private:
        double membershipFee;

    public:
        PremiumMember(string name_, int memberID_, int booksBorrowed_, double membershipFee_)
            : LibraryMember(name_, memberID_, booksBorrowed_)   // Call parent constructor
        {
            membershipFee = membershipFee_;
        }
            

        double getMembershipFee(){
            return membershipFee;
        }
};
int main() {
    PremiumMember p("John", 101, 5, 2500.50);

    cout << "Name: " << p.getName() << endl;
    cout << "Member ID: " << p.getMemberID() << endl;
    cout << "Books Borrowed: " << p.getBooksBorrowed() << endl;
    cout << "Membership Fee: " << p.getMembershipFee() << endl;

    return 0;
}
#include <iostream>
using namespace std;

class Payment {
    public:
        int amount,transactionfee,discount;

        void processPayment(int amnt){
            amount = amnt;

            cout << "Enter amount:"<< amount << endl;
            

        }
        void processPayment(int amnt , int tf){
            amount = amnt;
            transactionfee = tf;
            int total = amount + transactionfee;
            cout << "Total amount to be paid: " << total << endl;
            
        }
        void processPayment(int amnt , int tf , int disc){
            amount = amnt;
            transactionfee = tf;
            discount = disc;
            int withdrawable = amount + transactionfee - discount;
            cout << "withdrawable amount to be paid after discount: " << withdrawable << endl;
            
        }

    };
int main(){
    Payment p;
    p.processPayment(1000);
    p.processPayment(1000, 50);
    p.processPayment(1000, 50, 100);
    return 0;
}
        
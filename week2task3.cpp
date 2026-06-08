#include <iostream>
using namespace std;

int main(){
    double a,b,result;
    char op;

    cout << "Enter first number :";
    cin >> a;

    cout << " Enter operator :";
    cin >> op;

    cout << "Enter second number :";
    cin >> b;

    switch(op){
        case '+':
            result = a + b;
            cout << "Result = " << a << " + " << b
                 << " = " << result << endl;
            break;

        case '-':
            result = a - b;
            cout << "Result = " << a << " - " << b
                 << " = " << result << endl;
            break;

        case '*':
            result = a * b;
            cout << "Result = " << a << " * " << b
                 << " = " << result << endl;
            break;

        case '/':
            if (b != 0) {
                result = a / b;
                cout << "Result = " << a << " / " << b
                     << " = " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;


    }
    
}
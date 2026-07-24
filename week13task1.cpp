#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string bookTitle;

    // Open the file in append mode
    ofstream outFile("borrowed_books.txt", ios::app);

    // Check if the file opened successfully
    if (!outFile) {
        cout << "Error: Unable to open the file." << endl;
        return 1;
    }

    // Get book title from the user
    cout << "Enter the title of the borrowed book: ";
    getline(cin, bookTitle);

    // Write the title to the file
    outFile << bookTitle << endl;

    // Close the file
    outFile.close();

    // Confirmation message
    cout << "Book title successfully stored in borrowed_books.txt." << endl;

    return 0;
}
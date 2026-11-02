#include <iostream>
#include <string>
using namespace std;

int main() {
	int choice;

	do {
		cout << "Arithmetic Menu" << endl;
		cout << "1. Addition \n";
		cout << "2. Subtraction \n";
		cout << "3. Multiplication \n";
		cout << "4. Division \n";
		cout << "5. Exit \n";
		cout << "Enter your choice (1-5): ";
		cin >> choice;

		switch (choice) {
		case 1: 
			cout << "You chose Addition." << endl;
			break;
		case 2:
			cout << "You chose Subtraction." << endl;
			break;
		case 3:
			cout << "You chose Multiplication." << endl;
			break;
		case 4:
			cout << "You chose Division." << endl;
			break;
		case 5:
			cout << "Exiting the program." << endl;
			break;
		default:
			cout << "Invalid choice. Please enter a number between 1 and 5." << endl;
		}
	} while (choice != 5);
}
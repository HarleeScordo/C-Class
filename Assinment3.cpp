/// ASSIGNMENT 3
/// Harlee Scordo
/// 
/// Answers
///a
///		R1 - The area is 50.2654
///		R2 - The area is 0
///		R3 - Bye
/// 
/// Part 2 BONUS, I only see the skeleton for part 1! so i left the notes on that one
/// 






///#include <iostream>
///using namespace std;

///int main()
///{
///	const double PI = 3.14159;
///	bool flag = true; /// EDIT, NEED TO INCLUDE BOOL CODE
///	char option; /// EDIT, NEED TO INCLUDE CHAR
///	while (flag) { ///EDIT NEED A FLAG TO SHOW ENDING
///		int choice; // User's shape choice
	///	double radius, // Circle radius
///			length, // Rectangle length
///			width, // Rectangle width
///			base, // Triangle base
///			height, // Triangle height
///			area; // Area of the selected shape

		// Display selections and request user input
///		cout << "Geometry Calculator\n\n";
///		cout << "1. Calculate the area of a Circle\n";
///		cout << "2. Calculate the area of a Rectangle\n";
///		cout << "3. Calculate the area of a Triangle\n";
///		cout << "4. Quit\n\n";
///		cout << "Enter your choice (1-4): ";
///		cin >> choice;

		// Calculate and display the area of the selected shape
///		switch (choice)
///		{
///		case 1: // Area of a circle
///			cout << "\nEnter the circle's radius: ";
///			cin >> radius;

///			if (radius < 0)
///				cout << "\nThe radius can not be less than zero.\n";
///			else
///			{
///				area = PI * radius * radius;
///				cout << "\nThe area is " << area << endl;
///				break;
///			}

///		case 2: // Area of a rectangle
///			cout << "\nEnter the rectangle's length: ";
///			cin >> length;
///			cout << "Enter the rectangle's width: ";
///			cin >> width;

///			if (length < 0 || width < 0)
///				cout << "\nOnly enter positive values for length and width.\n";
///			else
///			{
///				area = length * width;
///				cout << "\nThe area is " << area << endl;
///			}
///			break;

///		case 3: // Area of a triangle
///			cout << "Enter the length of the base: ";
///			cin >> base;
///			cout << "Enter the triangle's height: ";
///			cin >> height;

///			if (base < 0 || height < 0)
///				cout << "\nOnly enter positive values for base and height.\n";
///			else
///			{
///				area = base * height * 0.5;
///				cout << "\nThe area is " << area << endl;
///			}
///			break;

///		case 4: cout << "\nBye!\n";
///			break;

///		default: cout << "\nYou may only enter 1, 2, 3, or 4.\n";
///		}

///		cout << "Do you want to run the program again?" << endl; ///EDIT, NEW CODE
///		cin >> option; /// EDIT

///		if (option == 'N' || option == 'n') ///EDIT
///		{
///			flag = false; /// EDIT
///		}

///	}
///	return 0;
///}










#include<iostream>
#include<ctype.h>
#include<string>
#include<iomanip>

using namespace std;


int main() {

	string type;
	double base, price1, price2;
	int count = 0;
	while (true) {

		while (true) {
			cout << "Please Enter the Customer Type (R for Regular, B for Business):";
			cin >> type;
			if (tolower(type[0]) != 'r' && tolower(type[0]) != 'b') {
				cout << "Invalid data\n";
				count++;
				if (count == 3) {
					cout << "Exiting as maximum attempts exceeded 3\n";
					return 0;
				}
			}
			else
				break;
		}
		string phone;
		cout << "Please Enter the Customer Phone Number:";
		cin >> phone;
		int minutes;
		count = 0;
		while (true) {
			cout << "Enter the phone usage in minutes:";
			cin >> minutes;
			if (minutes < 0) {
				cout << "Invalid data\n";
				count++;
				if (count == 3) {
					cout << "Exiting as maximum attempts exceeded 3\n";
					return 0;
				}
			}
			else
				break;
		}
		cout << "Power Bill for " << phone << endl;

		cout << "=====================================\n";
		cout << "Total Minutes: " << minutes << endl;

		if (tolower(type[0]) == 'r') {
			cout << "Monthly base payment: $29.99" << endl;
			if (minutes > 200) {
				double data = minutes - 200;
				if (data > 250) {
					price1 = 250.0 * 0.55;
					data = data - 250;
					price2 = data * 0.88;
				}
				else {
					price1 = data * 0.55;
					price2 = 0;
				}
			}
			else {
				price1 = 0;
				price2 = 0;
			}
			cout << "Cost for Stage1 units: $" << fixed << setprecision(2) << price1 << endl;
			cout << "Cost for Stage2 units: $" << fixed << setprecision(2) << price2 << endl;
			double total = 29.99 + price1 + price2;
			cout << "Total Cost : $" << fixed << setprecision(2) << total << endl;
		}
		if (tolower(type[0]) == 'b') {
			cout << "Monthly base payment: $99.00" << endl;
			if (minutes > 600) {
				double data = minutes - 600;
				if (data > 100) {
					price1 = 100.0 * 0.45;
					data = data - 100;
					price2 = data * 0.99;
				}
				else {
					price1 = data * 0.45;
					price2 = 0;
				}
			}
			else {
				price1 = 0;
				price2 = 0;
			}
			cout << "Cost for Stage1 units: $" << fixed << setprecision(2) << price1 << endl;
			cout << "Cost for Stage2 units: $" << fixed << setprecision(2) << price2 << endl;
			double total = 29.99 + price1 + price2;
			cout << "Total Cost : $" << fixed << setprecision(2) << total << endl;

		}
		string ch;
		cout << "More Bills?[Y/N]:";
		cin >> ch;
		if (ch[0] == 'N')
			break;
	}
	return 0;
}
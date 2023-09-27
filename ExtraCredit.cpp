#include<iostream>

using namespace std;
void displayMenu();
double fahrenheitToCilsuis(double fTemp);
double milesToKilometers(double miles);
double litersToGallons(double liters);

int main() {

	int choice;

	do {

		displayMenu();
		cout << "Please choose one from the menu: ";
		cin >> choice;

		switch (choice) {

		case 1:

		{

			double f;

			cout << "Enter fahrentheit: ";
			cin >> f;
			cout << "Celsius: " << fahrenheitToCilsuis(f) << endl;

		}

		break;

		case 2:

		{

			double miles;

			cout << "Enter Miles: ";
			cin >> miles;
			cout << "Kilometers: " << milesToKilometers(miles) << endl;

		}

		break;

		case 3:

		{

			double liters;

			cout << "Enter Liters: ";
			cin >> liters;
			cout << "Gallons: " << litersToGallons(liters) << endl;

		}

		break;

		case 4:

			cout << "Thank you!" << endl;

			break;

		}

	} while (choice != 4);

	return 0;

}

void displayMenu() {

	cout << "Welcome to the Conversion Program" << endl;
	cout << "===============================" << endl;
	cout << "1. Fahrenheit to Celsius" << endl;
	cout << "2. Miles to kilometers" << endl;
	cout << "3. Liters to Gallons" << endl;
	cout << "4. Exit from the program" << endl;

}

double fahrenheitToCilsuis(double fTemp) {

	return (fTemp - 32) * 5 / 9;

}

double milesToKilometers(double miles) {

	return miles * 1.60934;

}

double litersToGallons(double liters) {

	return liters * 0.264172;

}
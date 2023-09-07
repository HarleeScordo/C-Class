#include <iostream>
using namespace std;
double areaOfCircle(double radius);
double areaOfSquare(double length);
double areaOfRATriangle(double base, double height);

double areaOfCircle(double radius) {
	return 3.14159 * radius * radius;
}

double areaOfSquare(double length) {
	return length * length;
}

double areaOfRATriangle(double base, double height) {
	return 0.5 * base * height;
}


int main()
{

	int input;
	double radius, side, base, height;
	bool quit = false;

	while (!quit) {
		cout << "Program to calculate area of objects." << endl;
		cout << "1 -- Square" << endl;
		cout << "2 -- Circle" << endl;
		cout << "3 -- Right Triangle" << endl;
		cout << "4 -- Quit" << endl;

		cin >> input;

		switch (input) {
		case 1:
			cout << "Side of Square: ";
			cin >> side;

			cout << "Area = " << areaOfSquare(side) << endl;
			break;

		case 2:
			cout << "Radius of Circle: ";
			cin >> radius;

			cout << "Area = " << areaOfCircle(radius) << endl;
			break;

		case 3:
			cout << "Base of the Triangle: ";
			cin >> base;

			cout << "Height of the Triangle: ";
			cin >> height;
			cout << "Area = " << areaOfRATriangle(base, height) << endl;
			break;

		case 4:
			quit = true;
			break;

		default:
			cout << "Choose 1-4 please." << endl;
		}

	}

	return 0;
}
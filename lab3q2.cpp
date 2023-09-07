#include<iostream>

using namespace std;

int main()
{
	double fah, cels;
	cout << "Enter Temperature in Farenheit:" << endl;
	cin >> fah;
	//Conversion
	cels = (5.0 / 9) * (fah - 32);

	cout << "Temperature in Celsius:" << cels << endl;

	return 0;
}
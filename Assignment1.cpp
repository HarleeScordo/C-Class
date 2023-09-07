// ***************************************************************
// HarleeScordo.cpp
// Part 2
// Prints a list of student names with their hometowns
// and intended major
// ***************************************************************
#include<iostream>
using namespace std;
int main()
{
	cout << endl;
	cout << "\tName\t\tHometown\t\tMajor" << endl;
	cout << "   " << endl;
	cout << "\tHarlee\t\tDaytona Beach\t\tNeuroscience" << endl;
	cout << "\tDominick\t\Statesborrow\t\tAerospace" << endl;
	cout << "\tSally\t\tRoanoke\t\t\tComputer Science" << endl;
	cout << "\tAlexander\tWashington\t\tMath" << endl;
	cout << endl;


	int feet, in, male, female;

	cout << "Please enter your height, feet followed by inches (eg;5    3);   5 _space_ 3" << endl;
	cin >> feet, cin >> in;

	male = 106 + (in * 6);
	female = 100 + (in * 5);

	cout << "If you are a male, your ideal weight should be " << male << " pounds." << endl;

	cout << "If you are a female, your ideal weight should be " << female << " pounds." << endl;



	return 0;
}


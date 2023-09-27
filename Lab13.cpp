#include<iostream>
#include<string>
using namespace std;
int main()
{
	
	int date[7];
	double snow[7];
	double average = 0;
	int high_index = 0;
	string month;
	
	cout << "Enter week period (Month)(Days) :";
	cin >> month;
	cout << endl;
	for (int i = 0; i < 7; i++)
	{
		cout << "Enter date of month :";
		cin >> date[i];
		cout << endl;
		cout << "Enter snow fall for the date :";
		cin >> snow[i];
		cout << endl;
	}
	for (int i = 0; i < 7; i++)
	{
		average = average + snow[i];
		if (snow[i] > snow[high_index]) high_index = i;
	}

	cout << "Snow Report " << month << endl;
	cout << "   " << endl;
	cout << "Date   Snow Fall" << endl;

	for (int i = 0; i < 7; i++)
		cout << date[i] << " " << snow[i] << endl;

	cout << "Height snow fall is " << snow[high_index] << " on " << date[high_index] << "th and the average snow fall is " << average / 7.0 << endl;

	system("pause");

	return 0;
}
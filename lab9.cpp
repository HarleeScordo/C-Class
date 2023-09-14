#include <iostream>

#include <iomanip>

using namespace std;


int main() {

	const double gravity = 9.8; 
	int s; 
	double h; 


	cout << "Please input the time of fall in seconds:\n";
	cin >> s;

	cout << "Please input the height of the bridge in meters:\n";
	cin >> h;

	

	cout << '\n'

		<< "Time Falling (seconds) Distance Fallen (meters)\n"

		"***********************************************\n";



	int seconds = 0; 
	double distance = 0; 
	bool bad_estimate = false; 

	while (seconds <= s) 
	{

		cout << setw(20) << left << seconds

			<< setw(21) << left << distance << '\n';


		if (distance > h) {

			bad_estimate = true;

		}

		

		seconds += 1;

		distance = 0.5 * gravity * (seconds) * (seconds);

	}

	cout << '\n'; 

	if (bad_estimate) { 

		cout << "Warning-Bad Data: The distance fallen exceeds the height of the bridge.";

		cout << '\n';

	}

	return 0;

}
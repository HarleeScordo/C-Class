/// Exercise 1 and 2

///int main()
///{
	///int num1, // num1 is not initialized 
///
	///	num2; // num2 has been initialized to 5
///
	///cout << "Please enter an integer" << endl;
	///cin >> num1;

	///cout << "Please enter a second integer" << endl;
	///cin >> num2;

	///cout << "num1 = " << num1 << " and num2 = " << num2 << endl;

	///if (num1 == num2)
		///cout << "Hey, that's a coincidence!" << endl;

	///if (num1 != num2)
		///cout << "The values are not the same" << endl;

	///return 0;
	/// 
	/// 
/// Exercise 3
///int num1, // Variable for number 1
///num2; // Variable for number 2
///cout << "Please enter an integer" << endl;
///in >> num1;
///cout << "Please enter an integer" << endl;
///cin >> num2;
///cout << "num1 = " << num1 << " and num2 = " << num2 << endl;
///if (num1 == num2)
///cout << "The values are the same. Hey that’s a coincidence!" << endl;
///if (num1 != num2)
///cout << "The values are not the same" << endl;
/// 
/// Exercise 4
/// #include <iostream>

#include<iostream>
using namespace std;

int main()

{

	int num1, // variable for number 1

		num2; // variable for number 2

	cout << "Please enter an integer" << endl;
	cin >> num1;

	cout << "Please enter an integer" << endl;
	cin >> num2;

	cout << "num1 = " << num1 << " and num2 = " << num2 << endl;


	if (num1 == num2)

		cout << "The values are the same. Hey that’s a coincidence!" << endl;

	else

		cout << "The values are not the same" << endl;

	return 0;

}
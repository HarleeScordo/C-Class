// This program prints "You Pass" if a student's average is
// 60 or higher and prints "You Fail" otherwise
// PLACE YOUR NAME HERE

///Exercise 1
///#include <iostream>
///using namespace std;
///int main() {
	///float average; // holds the grade average

	///cout << "Input your average:" << endl; 
	///cin >> average;

	///if (average >= 60) cout << "You Pass" << endl; 
	///if (average < 60) cout << "You Fail" << endl; 
	
	////return 0;
///}

///Exercise 2

///{
	///float average; // holds the grade average
	///cout << "Input your average:" << endl;
	///cin >> average;
	///if (average >= 60)
	///	cout << "You Pass" << endl;
	///else {
	///	cout << "You Fail" << endl;
	///return 0;
///}

///Exercise 3
#include <iostream>
using namespace std;
int main()
{
	float average;

	cout << "Input your average:" << endl;
	cin >> average;

	if (average > 100)
		cout << "Invalid Input" << endl;

	else if (average >= 90) {
		cout << "Grade A" << endl;

	else if (average >= 80) {
		cout << "Grade B" << endl;

	else if (average >= 60) {
		cout << "You pass" << endl;

	else {
		cout << "You fail" << endl;


	return 0;
}
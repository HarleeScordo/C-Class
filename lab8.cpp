/// Number 1 answers
/// Expected output - After loop i = 11  /  After loop i = 0
/// Observed output - After loop i = 11  /  After loop i = 0

// ****************************************************************
// lab8.cpp
//
// Use a while loop to print many messages declaring your 
// passion for computer science
// ****************************************************************
///#include<iostream>
///using namespace std;
///int main{
	// *** Step 2: Create an int called numTimes
	// *** Step 2: Get rid of this, prompt the user for numTimes instead
	///const int LIMIT = 10;
	///int count = 1;
	// *** Step 2: Change this to check if count is <= numTimes
	////while (count <= LIMIT)
	///{
		// *** Step 2: Change this line to output count before the phrase
		///cout << I love Computer Science!!"<<endl;
			// *** Step 1: Increment count (hint: use the ++ operator)
		///	}
	// *** Step 2: Output the "Printed this message..." line
///}
///}







#include <iostream>
using namespace std;

int main()
{
	int numTimes, LIMIT;

	cout << "Number of times the verbage should be printed." << endl;
	cin >> numTimes;

	int count = 1;

	while (count <= numTimes) 
	{
		cout << count << "I Love Computer Science" << endl;
		count++;
	}

	cout << "Print this message " << numTimes << " times";


	return 0;
}
/// Assignment 5
/// Harlee Scordo
/// 
/// part 1
/// a. 10    20
/// b. 20    10
/// c. For a, the swap function swaps the values of its local pameters, but does not affect the original variables. But for b, the reference swaps the value and directly affect the original values. 
/// 

#include <iostream>
using namespace std;
bool grade(char correctAnswers[], char studentAnswers[], int* ctr) {
	
	for (int i = 0; i < 10; i++) {
		
		if (correctAnswers[i] == studentAnswers[i])
			(*ctr)++;
	}
	
	if (*ctr >= 8) {
		return true;
	}
	
	else {
		return false;
	}
}

int main()
{
	
	char correctAnswers[10] = { 'B','D','A','A','C','A','B','A','C','D' };
	
	char studentAnswers[10];
	int counter = 0, ctr = 0; 
	int i = 0; 
	
	while (i < 10) {
		char ch; 
		cout << "Answer the question by entering (A,B,C or D) ";
		cin >> ch; 
		cout << ch << endl; 
		
		if (ch == 'A' || ch == 'B' || ch == 'C' || ch == 'D') {
			studentAnswers[i] = ch;
			i++;
		}
		
		else {
			cout << "(A,B,C or D) are the only valid inputs" << endl;
			counter++;
		}
		
		if (counter == 3) {
			cout << "GOOD BYE";
			exit(0);
		}
		else
			continue;
	}
	
	bool res = grade(correctAnswers, studentAnswers, &ctr);
	
	if (res == true) {
		cout << "Congratulations!" << endl;
		cout << "You have passed exam." << endl;
	}
	
	else {
		cout << "Sorry, you have not passed the exam!" << endl;
	}
	cout << "Total number of correct answers: " << ctr << endl;
	cout << "Total number of incorrect answers: " << 10 - ctr << endl;
	return 0;
}
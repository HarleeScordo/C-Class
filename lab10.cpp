#include <iostream>
#include <string>
using namespace std;
int main()
{
	string rar;
	char c;
	int len, upper = 0, lower = 0, digit = 0, spaces = 0, others = 0;

	cout << "Enter characters .... to stop press # key " << endl;

	while (cin.get(c) && c != '#')
	{
		rar += c;


		if (c > 64 && c < 91)
			upper++;

		else if (c > 96 && c < 123)
			lower++;

		else if (c > 47 && c < 58)
			digit++;

		else if (c == ' ')
			spaces++;

		else
			others++;

	}


	cout << endl;

	len = rar.length();

	cout << rar << endl;

	cout << " " << endl;
	cout << "Total : " << len << endl;

	cout << "Number of Uppercase letters: " << upper << endl;
	cout << "Number of Lowercase letters: " << lower << endl;
	cout << "Number of Digits: " << digit << endl;
	cout << "Number of Spaces: " << spaces << endl;
	cout << "Other: " << others << endl;

	return 0;
}

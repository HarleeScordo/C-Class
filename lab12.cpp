/// 
/// Output
/// 1.	10
///		80
///		68
/// 
///Output
///2.	Flagstaff
///		
///

#include<iostream>
#include<iomanip>

using namespace std;

int main() {

	double Sales[10];


	for (int i = 0; i < 10; i++) {

		cout << "Enter Store " << (i + 1) << " daily sales: ";
		cin >> Sales[i];
	}

	double HighestSales = Sales[0], LowestSales = Sales[0], AverageSale = 0.0;
	int HighStoreNumber = 0, LowStoreNumber = 0;


	for (int i = 0; i < 10; i++) {

		if (HighestSales < Sales[i]) {
			HighestSales = Sales[i];
			HighStoreNumber = i;

		}

		if (LowestSales > Sales[i]) {
			LowestSales = Sales[i];
			LowStoreNumber = i;

		}

		AverageSale += Sales[i];

	}

	AverageSale /= 10;

	cout << setprecision(2) << fixed;
	cout << "Highest Sale: " << HighestSales << ", Store number: " << (HighStoreNumber + 1) << endl;
	cout << "Lowest Sale: " << LowestSales << ", Store number: " << (LowStoreNumber + 1) << endl;
	cout << "Average Sale: " << AverageSale << endl;

	return 0;

}
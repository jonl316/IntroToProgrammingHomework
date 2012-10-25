

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// Declare and initialize variables
	double sales = 0.0;
	int numSales = 0;
	double totalSales = 0.0;
	double average = 0.0;

	

	// prompt the user to enter necessary data.
	cout << "First sales amount (negative number to stop): " ;
	cin >> sales;

	// Algorithm & Repitition statement

	while (sales >= 0.0)
	{
		numSales++;
		totalSales = totalSales + sales;
		cout << "Next sales amount (negative number to stop): ";
		cin >> sales;
	} // end while

	cout << fixed << setprecision(2);
	
	if (numSales > 0)
	{
		average = totalSales / numSales;
		cout << "Average: $" << average << endl;
	} // end if 


	system("PAUSE");
	return 0;
} // end of main
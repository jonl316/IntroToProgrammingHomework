

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// Setup and initialize the variables
	double quarterlySales = 0.0;
	int numRegion = 1;
	double numSubTotalQuarterlySales = 0.0;
	double totalQuarterlySales = 0.0;
			
	// While Statement to calculate totalQuarterlySales
	while (numRegion < 4)
	{
		// Prompt for user to enter the quarterly sales
		cout << "Please enter the quarterly Sales for region " << numRegion << ": $";
		cin >> quarterlySales;
		numSubTotalQuarterlySales += quarterlySales;
		cout << "Region: "<< numRegion << " Sales: " << numSubTotalQuarterlySales << endl;
		numRegion++;
	}// end while

	totalQuarterlySales = numSubTotalQuarterlySales;
	// Display results to the screen. 
	cout << fixed << setprecision(2);
	cout << "The Total Quarterly Sales for All Regions is: $" << totalQuarterlySales << endl;

	system("PAUSE");
	return 0;
} // end of main 
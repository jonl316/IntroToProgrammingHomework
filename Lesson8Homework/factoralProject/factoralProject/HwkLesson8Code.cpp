// Factoral Program
// Intro C++, Lesson 8
// Written by Jonathan Livesay, Oct 2012

// Program to calculate the factorial result of a number.

#include <iostream>
using namespace std;

int main()
{
	// Declare and initialize the variables
	double factorialNumber = 0.0;
	int counter = 0;
	double factorialResult = 1.0;

	// Prompt the user for input
	cout << "Please enter a number to get the factorial result (between 2 and 60):";
	cin >> factorialNumber;

	// If statement to test if the factorialNumber is between 2 and 60
	if (factorialNumber < 2 || factorialNumber > 60)
		cout << "Please enter a number between 2 and 60" << endl;
	else
	{
		// While loop
		while (counter < factorialNumber)
		{
			factorialResult += factorialResult * counter;
			counter += 1;
		}// end while
		cout << "The factorial of " << factorialNumber << " is " << factorialResult << endl;
	}// end if

	system("PAUSE");
	return 0;
} // end of main
// Salary Program
// Intro C++, Lesson 6
// Written by Jonathan Livesay, Oct 2012

// Program to calculate raises for employees based on their current salary.

#include <iostream>
#include <iomanip>
using namespace std;

int main( )
{
    //Declare variables and constants
	double oldSalary = 0.0;
	double raiseAmount = 0.0;
	double newSalary = 0.0;
   
    //Prompt the user for inputs
	cout << "Please enter the employees current salary: $";
	cin >> oldSalary;

    //Decide raiseAmount
	if (oldSalary <= 14999.99)
	{
		raiseAmount = oldSalary * .05;
	} 
	else if (oldSalary <= 49999.99)
	{
		raiseAmount = oldSalary * .07;
	} 
	else if (oldSalary <= 99999.99)
	{
		raiseAmount = oldSalary * .10;
	}
	else if (oldSalary >= 100000.00)
	{
		raiseAmount = oldSalary * .15;
	}// end if 
	 
    // Calculate newSalary
	newSalary = oldSalary + raiseAmount;
	
	//Display the result
	cout << fixed << setprecision(2);
	cout << "The employee will receive a raise of: $" << raiseAmount << endl;
	cout << "Employees new salary will be: $" << newSalary << endl;

    system("pause");
    return 0;
} //end of main
// Balloon Volume Calculator Program
// Intro C++, Lesson 4
// Written by Jonathan Livesay, Sept 2012

#include <iostream>
using namespace std;

int main( )
{
    //Declare variables and constants
    double balloonRadius = 0.0;
	double numberOfBalloons = 0.0;
    double balloonVolume = 0.0;
    const double PI = 3.141593;
    double totalVolume = 0.0;

    //Prompt the user for inputs
	cout << "Enter the balloon radius: ";
    cin >> balloonRadius;
	cout << "Enter the number of balloons: ";
    cin >> numberOfBalloons;

    //Calculate the balloonVolume
    balloonVolume = ((((balloonRadius * balloonRadius * balloonRadius)*4)/3)*PI);

	// Calculate the totalVolume
	totalVolume = balloonVolume * numberOfBalloons;

    //Display the result
    cout << "Total volume of helium needed to inflate balloons: " << totalVolume << endl;

    system("pause");
    return 0;
} //end of main 
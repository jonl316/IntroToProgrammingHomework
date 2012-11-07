//Cone Volume Calculator Program
// Intro C++, Lesson 4
// Written by Bill H, August  2012

#include <iostream>
using namespace std;

int main( )
{
    //Declare variables and constants
    double coneRadius = 0.0;
    double coneHeight = 0.0;
    const double PI = 3.14;
    double coneVolume = 0.0;

    //Prompt the user for inputs
    cout << "Enter the radius of the cone: ";
    cin >> coneRadius;
    cout << "Enter the height of the cone: ";
    cin >> coneHeight;

    //Do the calculation
    coneVolume = 0.33 * PI * coneRadius * coneRadius * coneHeight;

    //Display the result
    cout << "The volume of your cone is: " << coneVolume << endl;

    system("pause");
    return 0;
} //end of main
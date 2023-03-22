// The Windchill Calculator
// 
// This program calculates windchill
// when given a temperature in Fahrenheit
// and a speed in miles per hour


#include <stdio.h>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// function prototypes
void getInput(int& V, int& T);
int windchill(int V, int T);

int main()
{
	int V, T,  W; // variables for Velocity, Temperature, and Windchill

	cout << "\t\tThe Windchill Calculator\n";
	cout << "*****************************************\n";

	//call getInput() method
	getInput(V, T);

	//call windchill() method
	W = windchill(V, T);

	cout << "Current temperature: " << T << "F" << endl;
	cout << "Windchill factor: " << W << "F" << endl;
    return 0;
}

void getInput(int& V, int& T)
{
	cout << "Enter wind speed in miles per hour: ";
	cin >> V;

	cout << "Enter temperature in degrees Fahrenheit: ";
	cin >> T;
	cout << endl;
}

int windchill(int V, int T)
{
	int W;
	
	//calculation of windchill
	W = 35.72 + 0.6215 * T - 35.75* (pow(V,0.16)) + 0.4275 * T * (pow(V,0.16));

	return W;
}

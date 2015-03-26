//
//  Assignment 1 - Leander Rodriguez
//  
//  CST 116 - C++ Programming I
//
//  Due Date:  Sunday, October 7th by 11:59pm
//

#include <iostream>

using namespace std;

int main ()

{
	cout  << "Enter the cost for a gallon of gas: $";
	float cost_of_gas; 
	cin >> cost_of_gas;

	cout  <<  "Enter the miles per gallon of gas for the car: ";
	unsigned mpg;
	cin  >>  mpg;

	cout  <<  "Enter the speed traveled (miles/hour): ";
	unsigned mph;
	cin  >> mph;

	cout  <<  "Enter the time it took to get there (hours): ";
	float time_spent_driving;
	cin  >>  time_spent_driving; 

	cout  << endl;
	cout  <<  "---"  <<  endl;
	cout  <<  endl;

	float miles_traveled;
	miles_traveled = time_spent_driving * mph;
	cout  <<  "The car traveled "  <<  miles_traveled;

	float gas_required;
	gas_required = miles_traveled / mpg;
	cout <<  " miles and required "  <<  gas_required  <<  " gallons of gas."  << endl;

	float total_fuel_cost;
	total_fuel_cost = gas_required *cost_of_gas;
	cout <<  "The total fuel cost for the trip was $"  <<  total_fuel_cost  << "."  <<  endl; 

	cout  <<  endl;

	return 0;
}
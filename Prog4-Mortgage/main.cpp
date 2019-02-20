/*
===================================
Programming II
Assignment #4 - Mortgage Calculator
Jonathan Parker 
2/19/2019
===================================
*/



#include <iomanip>
#include <iostream>
#include <string>
#include "Mortgage.h"
using namespace std;

// Function Prototypes
bool parseInt(string sval, int& val);
bool parseInt(string sval, double& val);

int main()
{
	/* Variable Declarations
	Mortgage - class used to do the calculations for the Mortgage (from "Mortgage.h")
	MortgageData - struct used to store all of the data and results for the Mortgage Calculations (from "Mortgage.h")
	input - What the user inputs for the data
	*/
	Mortgage mortgage;
	MortgageData mortgageData;
	string input;

	cout << "How much is the loan?" << endl;
	getline(cin, input);
	while (!parseInt(input, mortgageData.loan))
	{
		cout << "You can't have a negative loan! Please reenter value." << endl;
		getline(cin, input);
	}

	cout << "what is the interest rate on the loan?" << endl;
	getline(cin, input);
	while (!parseInt(input, mortgageData.rate))
	{
		cout << "You can't have a negative rate! Please reenter value." << endl;
		getline(cin, input);
	}

	cout << "How many years is the loan?" << endl;
	getline(cin, input);
	while (!parseInt(input, mortgageData.years))
	{
		cout << "You can't have a negative ammont of years on a loan! Please reenter value." << endl;
		getline(cin, input);
	}

	mortgage.getData(mortgageData);
	mortgageData = mortgage.returnValues();

	cout << fixed << showpoint << setprecision(2);
	cout << "a loan worth $" << mortgageData.loan << " at an interest rate of " << mortgageData.rate << "% over " << mortgageData.years << " years has a monthly payment of $"
		<< mortgageData.monthlyPayment << " for a total payment of $" << mortgageData.totalPayment << " !" << endl;

	
}


/* Function Overview
======================================
Name: parseInt
Description: 
	checks to see if the user's input is valid
Prerequisites:
	sval = user's input
	val = the user's input in the required data type
Return:
	success = tells the program if the input was valid or not
Overload:
	states wether or not the input is supposed to be an int or double
======================================
*/ 
bool parseInt(string sval, int& val)
{
	int num;
	bool success = true;
	try
	{
		num = stoi(sval);
		val = num;
	}
	catch (const std::exception&)
	{
		success = false;
	}
	return success;
}
bool parseInt(string sval, double& val)
{
	double num;
	bool success = true;
	try
	{
		num = stof(sval);
		val = num;
	}
	catch (const std::exception&)
	{
		success = false;
	}
	return success;
}
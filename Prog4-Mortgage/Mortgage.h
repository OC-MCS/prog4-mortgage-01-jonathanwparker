/*
===================================
Programming II
Assignment #4 - Mortgage Calculator
Jonathan Parker 
2/19/2019
===================================
*/


#pragma once
// MortgageData structs store the data and results from the calculations
struct MortgageData
{
	double loan;
	int years;
	double rate;
	double monthlyPayment;
	double totalPayment;
};

// Mortage classes are used for calculating the mortgage
class Mortgage
{
private:
	/* Variable Declarations
	loan -  stores the value of the loan
	years - stores the ammount of years the user has the loan
	rate -  stores the interest rate of the loan
	term -  stores the term length of the loan
	monthlyPayment - stores the monthly payment of the loan
	totalPayment - stores the total payment of the loan
	*/
	double loan;
	int years;
	double rate;
	double term;
	double monthlyPayment;
	double totalPayment;

	// Function Prototypes
	void calculatePayment();
	void calculateTerm();
public:
	// Constructor Prototypes
	Mortgage();
	Mortgage(double l, double r,int y);

	// Function Prototypes
	MortgageData returnValues();
	void getData(MortgageData md);
	
};



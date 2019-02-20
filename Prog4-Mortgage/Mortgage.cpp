/*
===================================
Programming II
Assignment #4 - Mortgage Calculator
Jonathan Parker 
2/19/2019
===================================
*/


#include "Mortgage.h"
#include <iostream>
#include <iomanip>


using namespace std;
/* Constructor Overview
======================================
Description:
	stores given values into loan,rate and year and gets the term and payments numbers
Prerequisites:
	l = user's input for loan ammount
	r = user's input for interest rate
	y = user's input for loan's length
Overload:
	if nothing is inputted, then 0's are stored instead
======================================
*/
Mortgage::Mortgage()
{
	loan = 0;
	rate = 0;
	years = 0;
	calculateTerm();
	calculatePayment();
}
Mortgage::Mortgage(double l, double r, int y)
{
	loan = l;
	rate = r;
	years = y;
	calculateTerm();
	calculatePayment();
}


/* Function Overview
======================================
Name: getData
Description:
	grabs user's input from the MortgageData structure
Prerequisites:
	md = stores the user's input to send to the class
Return:
	N/A
======================================
*/
void Mortgage::getData(MortgageData md)
{
	years = md.years;
	rate = md.rate;
	loan = md.loan;
	calculateTerm();
	calculatePayment();
}

/* Function Overview
======================================
Name: returnValues
Description:
	returns the result of the calculations as well as the inputs for override
Prerequisites:
	N/A
Return:
	md = stores the results of the caculations as well as the original inputs
======================================
*/
MortgageData Mortgage::returnValues()
{
	MortgageData md;
	md.years = years;
	md.rate = rate;
	md.loan = loan;
	md.monthlyPayment = monthlyPayment;
	md.totalPayment = totalPayment;
	return md;
}

/* Function Overview
======================================
Name: calculatePayment
Description:
	calculates both monthly and total payment over the inputted years
Prerequisites:
	N/A
Return:
	N/A
======================================
*/
void Mortgage::calculatePayment()
{
	monthlyPayment = (loan*(rate / 12)*term) / (term - 1);
	totalPayment = 12*years * monthlyPayment;
}

/* Function Overview
======================================
Name: calculateTerm
Description:
	calculates term value for the payment calcuations
Prerequisites:
	N/A
Return:
	N/A
======================================
*/
void Mortgage::calculateTerm()
{
	term = pow((1+ rate/12),(12*years));
}


#include "Mortgage.h"
#include <iostream>
#include <iomanip>


using namespace std;


Mortgage::Mortgage(double l, double r, double y)
{
	loan = l;
	rate = r;
	years = y;
}
double Mortgage::calculatePayment()
{
	double payment;
	calculateTerm();
	payment = (loan*(rate / 12)*term) / (term - 1);
	return payment;
}




double Mortgage::calculateTerm()
{
	term = pow((1+ rate/12),(12*years));
	return term;
}


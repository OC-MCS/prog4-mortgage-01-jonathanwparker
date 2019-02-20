#pragma once
// header file for Mortgage class
class Mortgage
{
private:
	double loan;
	int years;
	double rate;
	double term;
	double calculateTerm();
public:
	Mortgage(double l, double r,double y);
	double calculatePayment();
	
};

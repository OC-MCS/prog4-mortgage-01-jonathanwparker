#include <iomanip>
#include <iostream>
#include <string>
#include "Mortgage.h"

using namespace std;
bool parseInt(string sval, int& val);

int main()
{
	int main;
	main = 1;
}





bool parseInt(string sval, int& val)
{
	int num;
	bool success = true;
	try
	{
		num = stoi(sval);   // or use stof for string-to-float
		val = num;
	}
	catch (const std::exception&)
	{
		success = false;
	}
	return success;
}
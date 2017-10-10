#include <iostream>
using namespace std;

#include "calc.h"

int main(void)
{
	Calc calc;

	cout<< calc.Add(6, 2)      <<endl
	    << calc.Subtract(6, 2) <<endl
	    << calc.Multiply(6, 2) <<endl
	    << calc.Divide(6, 2)   <<endl;

	return 0;
}

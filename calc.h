#ifndef _CALC_H
#define _CALC_H

class Calc
{
public:
	int Add(int a, int b)
	{
		return a + b;
	}

	int Subtract(int a, int b)
	{
		return a - b;
	}

	int Multiply(int a, int b)
	{
		return a * b;
	}

	int Divide(int a, int b)
	{
		if (b == 0)
			throw "divisor must not be zero";
		return a / b;
	}
};

#endif  /* _CALC_H */

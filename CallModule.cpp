#include "CallModule.h"

double Calculator::Calculate(double y, char p, double x)
{

	switch (p)
	{
	case '+':
		return y + x;
	case '-':
		return y - x;
	case '*':
		return y * x;
	case '/':
		return y / x;
	default:
		break;
	}

	return 0.0;
}

# Console-Application-
C++ Application

A sinmple Calculator Application in C++


Class in Header Folder
class Calculator
{
public:
  double Calculate( double y, char p, double x);
	

};



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

